/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionLoad;
    QAction *actionAddFriend;
    QAction *actionAdministration;
    QAction *actionTeacher;
    QAction *actionAdd_Colleague;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *Overview;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QWidget *Search;
    QWidget *tab_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuPhonebook;
    QMenu *menuContact;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(559, 428);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QStringLiteral("actionLoad"));
        actionAddFriend = new QAction(MainWindow);
        actionAddFriend->setObjectName(QStringLiteral("actionAddFriend"));
        actionAdministration = new QAction(MainWindow);
        actionAdministration->setObjectName(QStringLiteral("actionAdministration"));
        actionTeacher = new QAction(MainWindow);
        actionTeacher->setObjectName(QStringLiteral("actionTeacher"));
        actionAdd_Colleague = new QAction(MainWindow);
        actionAdd_Colleague->setObjectName(QStringLiteral("actionAdd_Colleague"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        Overview = new QWidget();
        Overview->setObjectName(QStringLiteral("Overview"));
        verticalLayout = new QVBoxLayout(Overview);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(Overview);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        pushButton = new QPushButton(Overview);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        tabWidget->addTab(Overview, QString());
        Search = new QWidget();
        Search->setObjectName(QStringLiteral("Search"));
        Search->setAutoFillBackground(false);
        tabWidget->addTab(Search, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());

        verticalLayout_3->addWidget(tabWidget);


        verticalLayout_2->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 559, 29));
        menuPhonebook = new QMenu(menuBar);
        menuPhonebook->setObjectName(QStringLiteral("menuPhonebook"));
        menuContact = new QMenu(menuBar);
        menuContact->setObjectName(QStringLiteral("menuContact"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuPhonebook->menuAction());
        menuBar->addAction(menuContact->menuAction());
        menuPhonebook->addAction(actionSave);
        menuPhonebook->addAction(actionLoad);
        menuContact->addAction(actionAddFriend);
        menuContact->addAction(actionAdd_Colleague);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionLoad->setText(QApplication::translate("MainWindow", "Load", 0));
        actionAddFriend->setText(QApplication::translate("MainWindow", "Add Friend", 0));
        actionAdministration->setText(QApplication::translate("MainWindow", "Administration", 0));
        actionTeacher->setText(QApplication::translate("MainWindow", "Teacher", 0));
        actionAdd_Colleague->setText(QApplication::translate("MainWindow", "Add Colleague", 0));
        pushButton->setText(QApplication::translate("MainWindow", "View", 0));
        tabWidget->setTabText(tabWidget->indexOf(Overview), QApplication::translate("MainWindow", "Overview", 0));
        tabWidget->setTabText(tabWidget->indexOf(Search), QApplication::translate("MainWindow", "Friends", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Add Person", 0));
        menuPhonebook->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuContact->setTitle(QApplication::translate("MainWindow", "Contact", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
