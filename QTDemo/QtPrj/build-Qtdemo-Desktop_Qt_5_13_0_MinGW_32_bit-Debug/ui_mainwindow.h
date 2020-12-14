/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionbar1;
    QAction *actionbar2;
    QAction *actionbar3;
    QAction *actionbar_2;
    QAction *actionbar5;
    QAction *action77;
    QAction *action99;
    QAction *action88;
    QWidget *centralWidget;
    QCalendarWidget *calendarWidget;
    QMenuBar *menuBar;
    QMenu *menutest;
    QMenu *menubar;
    QMenu *menutest_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(806, 593);
        actionbar1 = new QAction(MainWindow);
        actionbar1->setObjectName(QString::fromUtf8("actionbar1"));
        actionbar2 = new QAction(MainWindow);
        actionbar2->setObjectName(QString::fromUtf8("actionbar2"));
        actionbar3 = new QAction(MainWindow);
        actionbar3->setObjectName(QString::fromUtf8("actionbar3"));
        actionbar_2 = new QAction(MainWindow);
        actionbar_2->setObjectName(QString::fromUtf8("actionbar_2"));
        actionbar5 = new QAction(MainWindow);
        actionbar5->setObjectName(QString::fromUtf8("actionbar5"));
        action77 = new QAction(MainWindow);
        action77->setObjectName(QString::fromUtf8("action77"));
        action99 = new QAction(MainWindow);
        action99->setObjectName(QString::fromUtf8("action99"));
        action88 = new QAction(MainWindow);
        action88->setObjectName(QString::fromUtf8("action88"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        calendarWidget = new QCalendarWidget(centralWidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(550, 340, 248, 197));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 806, 23));
        menutest = new QMenu(menuBar);
        menutest->setObjectName(QString::fromUtf8("menutest"));
        menubar = new QMenu(menutest);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menutest_2 = new QMenu(menuBar);
        menutest_2->setObjectName(QString::fromUtf8("menutest_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menutest->menuAction());
        menuBar->addAction(menutest_2->menuAction());
        menutest->addSeparator();
        menutest->addAction(menubar->menuAction());
        menubar->addAction(actionbar1);
        menubar->addAction(actionbar2);
        menubar->addAction(actionbar3);
        menubar->addSeparator();
        menubar->addAction(actionbar_2);
        menubar->addAction(actionbar5);
        menutest_2->addAction(action77);
        menutest_2->addAction(action99);
        menutest_2->addAction(action88);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionbar1->setText(QCoreApplication::translate("MainWindow", "bar1", nullptr));
        actionbar2->setText(QCoreApplication::translate("MainWindow", "bar2", nullptr));
        actionbar3->setText(QCoreApplication::translate("MainWindow", "bar3", nullptr));
        actionbar_2->setText(QCoreApplication::translate("MainWindow", "bar", nullptr));
        actionbar5->setText(QCoreApplication::translate("MainWindow", "bar5", nullptr));
        action77->setText(QCoreApplication::translate("MainWindow", "77", nullptr));
        action99->setText(QCoreApplication::translate("MainWindow", "99", nullptr));
        action88->setText(QCoreApplication::translate("MainWindow", "88", nullptr));
        menutest->setTitle(QCoreApplication::translate("MainWindow", "test", nullptr));
        menubar->setTitle(QCoreApplication::translate("MainWindow", "bar", nullptr));
        menutest_2->setTitle(QCoreApplication::translate("MainWindow", "test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
