#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class Logger;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void initUI();

    QString getOutputPath() const;
    QString getOutputFileName() const;
    QString getDbgLibSuffix() const;
    QString getRelLibSuffix() const;

    QStringList getLibFileList(const QString& path, const QString& suffix) const;
    void removeSuffix(QStringList& list1, const QString& suffix) const;
    void removeDuplicates(QStringList& dbgList, QStringList& relList, const QString& dbgSuff, const QString& relSuff) const;

private slots:
    void on_btnBrowseDbgLibPath_clicked();

    void on_btnBrowseRelLibPath_clicked();

    void on_btnBrowseOutPutLibPath_clicked();

    void on_btnAddMacro_clicked();

    void on_btnGenerate_clicked();

    void on_btnOpenOutputFile_clicked();

    void on_btnBrowseOutputFile_clicked();

private:
    Ui::MainWindow *ui;
    Logger* log;

    QString m_outputDir;
    QString m_outputFileName;
};
#endif // MAINWINDOW_H
