/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *lbldbgLibPath;
    QLabel *lblRelLibPath;
    QLabel *lblOutputPath;
    QLabel *lblOutputFileName;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *ledtDbgLibPath;
    QLineEdit *ledtRelLibPath;
    QLineEdit *ledtOutputPath;
    QLineEdit *ledtOutputFileName;
    QVBoxLayout *verticalLayout_3;
    QToolButton *btnBrowseDbgLibPath;
    QToolButton *btnBrowseRelLibPath;
    QToolButton *btnBrowseOutPutLibPath;
    QPushButton *btnAddMacro;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblDbgPrefix;
    QLineEdit *ledtDbgPrefix;
    QLabel *lblRelPrefix;
    QLineEdit *ledtRelPrefix;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblDbgSuffix;
    QLineEdit *ledtDbgSuffix;
    QLabel *lblRelSuffix;
    QLineEdit *ledtRelSuffix;
    QTableWidget *wgtMacros;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnGenerate;
    QPushButton *btnOpenOutputFile;
    QPushButton *btnBrowseOutputFile;
    QSpacerItem *horizontalSpacer;
    QLabel *lblTip;
    QProgressBar *progressBar;
    QTextEdit *tedtLog;
    QMenuBar *menubar;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(853, 600);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        MainWindow->setFont(font);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbldbgLibPath = new QLabel(centralwidget);
        lbldbgLibPath->setObjectName(QString::fromUtf8("lbldbgLibPath"));
        lbldbgLibPath->setFont(font);

        verticalLayout->addWidget(lbldbgLibPath);

        lblRelLibPath = new QLabel(centralwidget);
        lblRelLibPath->setObjectName(QString::fromUtf8("lblRelLibPath"));
        lblRelLibPath->setFont(font);

        verticalLayout->addWidget(lblRelLibPath);

        lblOutputPath = new QLabel(centralwidget);
        lblOutputPath->setObjectName(QString::fromUtf8("lblOutputPath"));
        lblOutputPath->setFont(font);

        verticalLayout->addWidget(lblOutputPath);

        lblOutputFileName = new QLabel(centralwidget);
        lblOutputFileName->setObjectName(QString::fromUtf8("lblOutputFileName"));
        lblOutputFileName->setFont(font);

        verticalLayout->addWidget(lblOutputFileName);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ledtDbgLibPath = new QLineEdit(centralwidget);
        ledtDbgLibPath->setObjectName(QString::fromUtf8("ledtDbgLibPath"));
        ledtDbgLibPath->setFont(font);

        verticalLayout_2->addWidget(ledtDbgLibPath);

        ledtRelLibPath = new QLineEdit(centralwidget);
        ledtRelLibPath->setObjectName(QString::fromUtf8("ledtRelLibPath"));
        ledtRelLibPath->setFont(font);

        verticalLayout_2->addWidget(ledtRelLibPath);

        ledtOutputPath = new QLineEdit(centralwidget);
        ledtOutputPath->setObjectName(QString::fromUtf8("ledtOutputPath"));
        ledtOutputPath->setFont(font);

        verticalLayout_2->addWidget(ledtOutputPath);

        ledtOutputFileName = new QLineEdit(centralwidget);
        ledtOutputFileName->setObjectName(QString::fromUtf8("ledtOutputFileName"));
        ledtOutputFileName->setFont(font);

        verticalLayout_2->addWidget(ledtOutputFileName);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        btnBrowseDbgLibPath = new QToolButton(centralwidget);
        btnBrowseDbgLibPath->setObjectName(QString::fromUtf8("btnBrowseDbgLibPath"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnBrowseDbgLibPath->sizePolicy().hasHeightForWidth());
        btnBrowseDbgLibPath->setSizePolicy(sizePolicy);
        btnBrowseDbgLibPath->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_3->addWidget(btnBrowseDbgLibPath);

        btnBrowseRelLibPath = new QToolButton(centralwidget);
        btnBrowseRelLibPath->setObjectName(QString::fromUtf8("btnBrowseRelLibPath"));
        sizePolicy.setHeightForWidth(btnBrowseRelLibPath->sizePolicy().hasHeightForWidth());
        btnBrowseRelLibPath->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(btnBrowseRelLibPath);

        btnBrowseOutPutLibPath = new QToolButton(centralwidget);
        btnBrowseOutPutLibPath->setObjectName(QString::fromUtf8("btnBrowseOutPutLibPath"));
        sizePolicy.setHeightForWidth(btnBrowseOutPutLibPath->sizePolicy().hasHeightForWidth());
        btnBrowseOutPutLibPath->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(btnBrowseOutPutLibPath);

        btnAddMacro = new QPushButton(centralwidget);
        btnAddMacro->setObjectName(QString::fromUtf8("btnAddMacro"));

        verticalLayout_3->addWidget(btnAddMacro);


        horizontalLayout->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lblDbgPrefix = new QLabel(centralwidget);
        lblDbgPrefix->setObjectName(QString::fromUtf8("lblDbgPrefix"));
        lblDbgPrefix->setFont(font);

        horizontalLayout_4->addWidget(lblDbgPrefix);

        ledtDbgPrefix = new QLineEdit(centralwidget);
        ledtDbgPrefix->setObjectName(QString::fromUtf8("ledtDbgPrefix"));
        ledtDbgPrefix->setFont(font);

        horizontalLayout_4->addWidget(ledtDbgPrefix);

        lblRelPrefix = new QLabel(centralwidget);
        lblRelPrefix->setObjectName(QString::fromUtf8("lblRelPrefix"));
        lblRelPrefix->setFont(font);

        horizontalLayout_4->addWidget(lblRelPrefix);

        ledtRelPrefix = new QLineEdit(centralwidget);
        ledtRelPrefix->setObjectName(QString::fromUtf8("ledtRelPrefix"));
        ledtRelPrefix->setFont(font);

        horizontalLayout_4->addWidget(ledtRelPrefix);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lblDbgSuffix = new QLabel(centralwidget);
        lblDbgSuffix->setObjectName(QString::fromUtf8("lblDbgSuffix"));

        horizontalLayout_5->addWidget(lblDbgSuffix);

        ledtDbgSuffix = new QLineEdit(centralwidget);
        ledtDbgSuffix->setObjectName(QString::fromUtf8("ledtDbgSuffix"));
        ledtDbgSuffix->setFont(font);

        horizontalLayout_5->addWidget(ledtDbgSuffix);

        lblRelSuffix = new QLabel(centralwidget);
        lblRelSuffix->setObjectName(QString::fromUtf8("lblRelSuffix"));

        horizontalLayout_5->addWidget(lblRelSuffix);

        ledtRelSuffix = new QLineEdit(centralwidget);
        ledtRelSuffix->setObjectName(QString::fromUtf8("ledtRelSuffix"));
        ledtRelSuffix->setFont(font);

        horizontalLayout_5->addWidget(ledtRelSuffix);


        verticalLayout_4->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_4, 1, 0, 1, 1);

        wgtMacros = new QTableWidget(centralwidget);
        wgtMacros->setObjectName(QString::fromUtf8("wgtMacros"));

        gridLayout->addWidget(wgtMacros, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnGenerate = new QPushButton(centralwidget);
        btnGenerate->setObjectName(QString::fromUtf8("btnGenerate"));

        horizontalLayout_3->addWidget(btnGenerate);

        btnOpenOutputFile = new QPushButton(centralwidget);
        btnOpenOutputFile->setObjectName(QString::fromUtf8("btnOpenOutputFile"));

        horizontalLayout_3->addWidget(btnOpenOutputFile);

        btnBrowseOutputFile = new QPushButton(centralwidget);
        btnBrowseOutputFile->setObjectName(QString::fromUtf8("btnBrowseOutputFile"));

        horizontalLayout_3->addWidget(btnBrowseOutputFile);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        lblTip = new QLabel(centralwidget);
        lblTip->setObjectName(QString::fromUtf8("lblTip"));
        lblTip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(lblTip);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        horizontalLayout_3->addWidget(progressBar);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        tedtLog = new QTextEdit(centralwidget);
        tedtLog->setObjectName(QString::fromUtf8("tedtLog"));

        gridLayout->addWidget(tedtLog, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 853, 26));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        lbldbgLibPath->setText(QCoreApplication::translate("MainWindow", "Debug Library Path:", nullptr));
        lblRelLibPath->setText(QCoreApplication::translate("MainWindow", "Release Library Path:", nullptr));
        lblOutputPath->setText(QCoreApplication::translate("MainWindow", "Output Path:", nullptr));
        lblOutputFileName->setText(QCoreApplication::translate("MainWindow", "Output File Name:", nullptr));
        ledtDbgLibPath->setText(QString());
        ledtRelLibPath->setText(QString());
        ledtOutputPath->setPlaceholderText(QCoreApplication::translate("MainWindow", "./", nullptr));
        ledtOutputFileName->setPlaceholderText(QCoreApplication::translate("MainWindow", "ImportLib.h", nullptr));
        btnBrowseDbgLibPath->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        btnBrowseRelLibPath->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        btnBrowseOutPutLibPath->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        btnAddMacro->setText(QCoreApplication::translate("MainWindow", "Add Macro", nullptr));
        lblDbgPrefix->setText(QCoreApplication::translate("MainWindow", "Debug Prefix:", nullptr));
        ledtDbgPrefix->setPlaceholderText(QString());
        lblRelPrefix->setText(QCoreApplication::translate("MainWindow", "Release Prefix:", nullptr));
        ledtRelPrefix->setPlaceholderText(QString());
        lblDbgSuffix->setText(QCoreApplication::translate("MainWindow", "Debug Suffix:", nullptr));
        ledtDbgSuffix->setText(QString());
        ledtDbgSuffix->setPlaceholderText(QCoreApplication::translate("MainWindow", "d.lib", nullptr));
        lblRelSuffix->setText(QCoreApplication::translate("MainWindow", "Release Suffix:", nullptr));
        ledtRelSuffix->setPlaceholderText(QCoreApplication::translate("MainWindow", ".lib", nullptr));
        btnGenerate->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
        btnOpenOutputFile->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        btnBrowseOutputFile->setText(QCoreApplication::translate("MainWindow", "Browse File", nullptr));
        lblTip->setText(QCoreApplication::translate("MainWindow", "Press \"Generate\" button to generate header file.", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
