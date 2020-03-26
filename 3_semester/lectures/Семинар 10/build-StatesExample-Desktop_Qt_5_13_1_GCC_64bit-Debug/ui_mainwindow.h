/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout;
    QToolButton *btnLaunch;
    QToolButton *btnStop;
    QToolButton *btnContinue;
    QSpacerItem *verticalSpacer;
    QToolButton *btnManeuverDone;
    QToolButton *btnError;
    QToolButton *btnErrorSolved;
    QToolButton *btnDone;
    QToolButton *btnCable;
    QToolButton *btnTrajectory;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(943, 654);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QFont font;
        font.setPointSize(18);
        textBrowser->setFont(font);

        horizontalLayout->addWidget(textBrowser);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnLaunch = new QToolButton(centralWidget);
        btnLaunch->setObjectName(QString::fromUtf8("btnLaunch"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnLaunch->sizePolicy().hasHeightForWidth());
        btnLaunch->setSizePolicy(sizePolicy);
        btnLaunch->setMinimumSize(QSize(200, 50));

        verticalLayout->addWidget(btnLaunch);

        btnStop = new QToolButton(centralWidget);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        sizePolicy.setHeightForWidth(btnStop->sizePolicy().hasHeightForWidth());
        btnStop->setSizePolicy(sizePolicy);
        btnStop->setMinimumSize(QSize(200, 50));

        verticalLayout->addWidget(btnStop);

        btnContinue = new QToolButton(centralWidget);
        btnContinue->setObjectName(QString::fromUtf8("btnContinue"));
        sizePolicy.setHeightForWidth(btnContinue->sizePolicy().hasHeightForWidth());
        btnContinue->setSizePolicy(sizePolicy);
        btnContinue->setMinimumSize(QSize(200, 50));

        verticalLayout->addWidget(btnContinue);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btnManeuverDone = new QToolButton(centralWidget);
        btnManeuverDone->setObjectName(QString::fromUtf8("btnManeuverDone"));
        sizePolicy.setHeightForWidth(btnManeuverDone->sizePolicy().hasHeightForWidth());
        btnManeuverDone->setSizePolicy(sizePolicy);
        btnManeuverDone->setMinimumSize(QSize(200, 50));

        verticalLayout->addWidget(btnManeuverDone);

        btnError = new QToolButton(centralWidget);
        btnError->setObjectName(QString::fromUtf8("btnError"));
        sizePolicy.setHeightForWidth(btnError->sizePolicy().hasHeightForWidth());
        btnError->setSizePolicy(sizePolicy);
        btnError->setMinimumSize(QSize(200, 50));

        verticalLayout->addWidget(btnError);

        btnErrorSolved = new QToolButton(centralWidget);
        btnErrorSolved->setObjectName(QString::fromUtf8("btnErrorSolved"));
        sizePolicy.setHeightForWidth(btnErrorSolved->sizePolicy().hasHeightForWidth());
        btnErrorSolved->setSizePolicy(sizePolicy);
        btnErrorSolved->setMinimumSize(QSize(200, 50));

        verticalLayout->addWidget(btnErrorSolved);

        btnDone = new QToolButton(centralWidget);
        btnDone->setObjectName(QString::fromUtf8("btnDone"));
        sizePolicy.setHeightForWidth(btnDone->sizePolicy().hasHeightForWidth());
        btnDone->setSizePolicy(sizePolicy);
        btnDone->setMinimumSize(QSize(200, 50));

        verticalLayout->addWidget(btnDone);

        btnCable = new QToolButton(centralWidget);
        btnCable->setObjectName(QString::fromUtf8("btnCable"));
        btnCable->setMinimumSize(QSize(200, 50));

        verticalLayout->addWidget(btnCable);

        btnTrajectory = new QToolButton(centralWidget);
        btnTrajectory->setObjectName(QString::fromUtf8("btnTrajectory"));
        btnTrajectory->setMinimumSize(QSize(200, 50));

        verticalLayout->addWidget(btnTrajectory);


        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 943, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnLaunch->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\320\272 \320\274\320\270\321\201\321\201\320\270\320\270", nullptr));
        btnStop->setText(QCoreApplication::translate("MainWindow", "\320\236\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \320\274\320\270\321\201\321\201\320\270\321\216", nullptr));
        btnContinue->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214 \320\274\320\270\321\201\321\201\320\270\321\216", nullptr));
        btnManeuverDone->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\275\321\221\320\262\321\200 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275", nullptr));
        btnError->setText(QCoreApplication::translate("MainWindow", "\320\236\321\210\320\270\320\261\320\272\320\260 \320\274\320\270\321\201\321\201\320\270\320\270", nullptr));
        btnErrorSolved->setText(QCoreApplication::translate("MainWindow", "\320\236\321\210\320\270\320\261\320\272\320\260 \320\276\321\202\321\200\320\260\320\261\320\276\321\202\320\260\320\275\320\260", nullptr));
        btnDone->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\270\320\265 \320\274\320\270\321\201\321\201\320\270\320\270", nullptr));
        btnCable->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\320\264\320\265\320\275 \320\232\320\260\320\261\320\265\320\273\321\214", nullptr));
        btnTrajectory->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\271\320\264\320\265\320\275\320\260 \321\202\321\200\320\260\320\265\320\272\321\202\320\276\321\200\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
