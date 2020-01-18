#include "MainWindow.h"
#include "ui_MainWindow.h"

#include "VCLHGVersion.h"
#include "Logger.h"

#include <QFileDialog>
#include <QFile>
#include <QDir>
#include <QTextStream>
#include <QDateTime>
#include <QDesktopServices>

#include <algorithm>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    log = new Logger(ui->tedtLog);
    initUI();
}

void MainWindow::initUI()
{
    this->setWindowTitle(QString("VCLHG %1").arg(VCLHG_VERSION_STR_SHORT));
    ui->tedtLog->setReadOnly(true);
    ui->tedtLog->setAcceptRichText(true);
    ui->progressBar->reset();
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::getOutputPath() const
{
    QString path =ui->ledtOutputPath->text();
    if (path.isEmpty()) {
        path = ui->ledtOutputPath->placeholderText();
    }
    return path;
}

QString MainWindow::getOutputFileName() const
{
    QString fileName =ui->ledtOutputFileName->text();
    if (fileName.isEmpty()) {
        fileName =ui->ledtOutputFileName->placeholderText();
    }
    return fileName;
}

QString MainWindow::getDbgLibSuffix() const
{
    QString path =ui->ledtDbgSuffix->text();
    if (path.isEmpty()) {
        path = ui->ledtDbgSuffix->placeholderText();
    }
    return path;
}
QString MainWindow::getRelLibSuffix() const
{
    QString path =ui->ledtRelSuffix->text();
    if (path.isEmpty()) {
        path = ui->ledtRelSuffix->placeholderText();
    }
    return path;
}

QStringList MainWindow::getLibFileList(const QString& path, const QString& suffix) const
{
    QDir dir(path);
    QFileInfoList fileList = dir.entryInfoList(QDir::Files, QDir::Name);
    QStringList result;
    for (const QFileInfo& fileinfo : fileList) {
        QString fileName = fileinfo.fileName();
        if (fileName.endsWith(suffix)) {
            result << fileName;
        }
    }
    return result;
}

void MainWindow::removeSuffix(QStringList& list, const QString& suffix) const
{
    auto it = std::remove_if(list.begin(), list.end(), [&](const QString& s){
        return s.contains(suffix);
    });
    list.erase(it, list.end());
}

void MainWindow::removeDuplicates(QStringList& dbgList, QStringList& relList, const QString& dbgSuff, const QString& relSuff) const
{
    if (dbgSuff != relSuff) {
        if (dbgSuff.contains(relSuff)) {
            removeSuffix(relList, dbgSuff);
        }
        else if (relSuff.contains(dbgSuff)) {
            removeSuffix(dbgList, relSuff);
        }
        else {
            // do nothing
        }
    }
}

void MainWindow::on_btnBrowseDbgLibPath_clicked()
{
    QString path = QFileDialog::getExistingDirectory(this, tr("Enter Debug Library Path"));
    if (!path.isEmpty()) {
        ui->ledtDbgLibPath->setText(path);
    }
}

void MainWindow::on_btnBrowseRelLibPath_clicked()
{
    QString path = QFileDialog::getExistingDirectory(this, tr("Enter Release Library Path"));
    if (!path.isEmpty()) {
        ui->ledtRelLibPath->setText(path);
    }
}

void MainWindow::on_btnBrowseOutPutLibPath_clicked()
{
    QString path = QFileDialog::getExistingDirectory(this, tr("Enter Output Path"));
    if (!path.isEmpty()) {
        ui->ledtOutputPath->setText(path);
    }
}

void MainWindow::on_btnAddMacro_clicked()
{
}

void MainWindow::on_btnGenerate_clicked()
{
    log->clear();

    QString dbgLibPath = ui->ledtDbgLibPath->text();
    log->info(QString("Debug Library Path : %1 ").arg(dbgLibPath));
    QString relLibPath = ui->ledtRelLibPath->text();
    log->info(QString("Release Library Path : %1 ").arg(relLibPath));
    m_outputDir = getOutputPath();
    log->info(QString("Output path : %1").arg(m_outputDir));

    m_outputFileName = getOutputFileName();
    log->infonl(QString("Output File Name : "));
    log->strong(m_outputFileName);
    log->endl();

    QString dbgPrefix = ui->ledtDbgPrefix->text();
    log->infonl(QString("Debug Library Prefix : "));
    log->strong(dbgPrefix);

    QString relPrefix = ui->ledtRelPrefix->text();
    log->infonl(QString("Release Library Prefix : "));
    log->strong(relPrefix);

    QString dbgLibSuff = getDbgLibSuffix();
    log->infonl(QString("Debug Library Suffix : "));
    log->strong(dbgLibSuff);

    QString relLibSuff = getRelLibSuffix();
    log->infonl(QString("Release Library Suffix : "));
    log->strong(relLibSuff);
    log->endl();

    QStringList dbgLibList = getLibFileList(dbgLibPath, dbgLibSuff);
    QStringList relLibList = getLibFileList(relLibPath, relLibSuff);

    // remove duplicates
    if (QDir(dbgLibPath) == QDir(relLibPath)) {
        removeDuplicates(dbgLibList, relLibList, dbgLibSuff, relLibSuff);
    }

    log->infonl(QString("Debug Library Count : "));
    log->strong(QString::number(dbgLibList.size()));
    log->infonl(QString("Release Library Count : "));
    log->strong(QString::number(relLibList.size()));
    log->endl();

    QFile file(m_outputDir + "/" + m_outputFileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        log->error("Create Output File Failed!");
        return;
    }

    QTextStream out(&file);

    QDateTime dt = QDateTime::currentDateTime();
    out << "// " << dt.toString("yyyy-MM-dd hh:mm:ss") << "\n";

    QString headProtectMacro = m_outputFileName.toUpper();
    headProtectMacro.replace('.', '_');
    out << "\n";
    out << "#ifndef " << headProtectMacro << "\n";
    out << "#define " << headProtectMacro << "\n";

    out << "\n";
    out << "#ifdef _MSC_VER \n";
    out << "\n";
    out << "#ifdef _DEBUG \n";
    out << "\n";

    for (int i = 0; i < dbgLibList.size(); ++i) {
        out << "#   pragma comment( lib, \"" << dbgPrefix << dbgLibList[i] << "\" ) \n";
    }

    out << "\n";
    out << "#else // RELEASE \n";
    out << "\n";

    for (int i = 0; i < relLibList.size(); ++i) {
        out << "#   pragma comment( lib, \"" << relPrefix << relLibList[i] << "\" ) \n";
    }

    out << "\n";
    out << "#endif // _DEBUG \n";
    out << "\n";
    out << "#endif // _MSC_VER \n";
    out << "\n";
    out << "#endif // " << headProtectMacro;

    file.close();
    log->info("Generate Success!");

    return;
}

void MainWindow::on_btnOpenOutputFile_clicked()
{
    QFileInfo fileInfo(m_outputDir + "/" + m_outputFileName);
    if (!fileInfo.isFile()) {
        log->error(QString("File is not exists : %1").arg(fileInfo.absoluteFilePath()));
    }
    QDesktopServices::openUrl(QUrl("file:///" + fileInfo.absoluteFilePath(), QUrl::TolerantMode));
}

void MainWindow::on_btnBrowseOutputFile_clicked()
{
    QUrl url("file:" + m_outputDir, QUrl::TolerantMode);
    QDesktopServices::openUrl(url);
}
