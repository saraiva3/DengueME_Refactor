/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <workspaceview.h>
#include "editor.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionExit;
    QAction *actionSave;
    QAction *actionRun;
    QAction *actionProject;
    QAction *actionModel;
    QAction *actionNewProject;
    QAction *actionEpidemiological;
    QAction *actionCoupled;
    QAction *actionIntegrated;
    QAction *actionTemporal;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionOptions;
    QAction *actionClose;
    QAction *actionRunByStep;
    QAction *actionSetWorkspace;
    QAction *actionRename;
    QAction *actionRemove;
    QAction *actionNewModel;
    QAction *actionModelBuilder;
    QAction *actionResetViews;
    QAction *actionBuilder;
    QAction *actionSynchronize;
    QAction *actionOpenExplorer;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *editorView;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *modelFile;
    QPushButton *buttonDefault;
    QToolButton *buttonHelp;
    QToolButton *buttonClose;
    QSpacerItem *horizontalSpacer_2;
    Editor *editor;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuProject;
    QMenu *menuEdit;
    QMenu *menuView;
    QToolBar *mainToolBar;
    QDockWidget *explorerDock;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_6;
    WorkspaceView *treeView;
    QDockWidget *outputDock;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *outputBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *clearButton;
    QPushButton *run_stopButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(706, 534);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/Resources/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/Resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionRun = new QAction(MainWindow);
        actionRun->setObjectName(QStringLiteral("actionRun"));
        actionRun->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/Resources/run.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun->setIcon(icon3);
        actionProject = new QAction(MainWindow);
        actionProject->setObjectName(QStringLiteral("actionProject"));
        actionModel = new QAction(MainWindow);
        actionModel->setObjectName(QStringLiteral("actionModel"));
        actionNewProject = new QAction(MainWindow);
        actionNewProject->setObjectName(QStringLiteral("actionNewProject"));
        actionNewProject->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/Resources/folder-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewProject->setIcon(icon4);
        actionEpidemiological = new QAction(MainWindow);
        actionEpidemiological->setObjectName(QStringLiteral("actionEpidemiological"));
        actionCoupled = new QAction(MainWindow);
        actionCoupled->setObjectName(QStringLiteral("actionCoupled"));
        actionIntegrated = new QAction(MainWindow);
        actionIntegrated->setObjectName(QStringLiteral("actionIntegrated"));
        actionTemporal = new QAction(MainWindow);
        actionTemporal->setObjectName(QStringLiteral("actionTemporal"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/Resources/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOptions->setIcon(icon5);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon6);
        actionRunByStep = new QAction(MainWindow);
        actionRunByStep->setObjectName(QStringLiteral("actionRunByStep"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/img/Resources/run-step.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRunByStep->setIcon(icon7);
        actionSetWorkspace = new QAction(MainWindow);
        actionSetWorkspace->setObjectName(QStringLiteral("actionSetWorkspace"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/img/Resources/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetWorkspace->setIcon(icon8);
        actionRename = new QAction(MainWindow);
        actionRename->setObjectName(QStringLiteral("actionRename"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/img/Resources/rename.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRename->setIcon(icon9);
        actionRemove = new QAction(MainWindow);
        actionRemove->setObjectName(QStringLiteral("actionRemove"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/img/Resources/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemove->setIcon(icon10);
        actionNewModel = new QAction(MainWindow);
        actionNewModel->setObjectName(QStringLiteral("actionNewModel"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/img/Resources/model-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewModel->setIcon(icon11);
        actionModelBuilder = new QAction(MainWindow);
        actionModelBuilder->setObjectName(QStringLiteral("actionModelBuilder"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/img/Resources/builderTool.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionModelBuilder->setIcon(icon12);
        actionResetViews = new QAction(MainWindow);
        actionResetViews->setObjectName(QStringLiteral("actionResetViews"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/img/Resources/Synchronize-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionResetViews->setIcon(icon13);
        actionBuilder = new QAction(MainWindow);
        actionBuilder->setObjectName(QStringLiteral("actionBuilder"));
        actionBuilder->setCheckable(false);
        actionBuilder->setEnabled(true);
        actionBuilder->setIcon(icon12);
        actionSynchronize = new QAction(MainWindow);
        actionSynchronize->setObjectName(QStringLiteral("actionSynchronize"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/Resources/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSynchronize->setIcon(icon14);
        actionOpenExplorer = new QAction(MainWindow);
        actionOpenExplorer->setObjectName(QStringLiteral("actionOpenExplorer"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        editorView = new QWidget(centralWidget);
        editorView->setObjectName(QStringLiteral("editorView"));
        verticalLayout_2 = new QVBoxLayout(editorView);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        modelFile = new QLabel(editorView);
        modelFile->setObjectName(QStringLiteral("modelFile"));
        modelFile->setMargin(6);
        modelFile->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(modelFile);

        buttonDefault = new QPushButton(editorView);
        buttonDefault->setObjectName(QStringLiteral("buttonDefault"));
        buttonDefault->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonDefault->sizePolicy().hasHeightForWidth());
        buttonDefault->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(buttonDefault);

        buttonHelp = new QToolButton(editorView);
        buttonHelp->setObjectName(QStringLiteral("buttonHelp"));
        buttonHelp->setStyleSheet(QStringLiteral("border: none;"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/img/Resources/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonHelp->setIcon(icon15);
        buttonHelp->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(buttonHelp);

        buttonClose = new QToolButton(editorView);
        buttonClose->setObjectName(QStringLiteral("buttonClose"));
        buttonClose->setStyleSheet(QStringLiteral("border: none;"));
        buttonClose->setIcon(icon6);
        buttonClose->setIconSize(QSize(18, 18));

        horizontalLayout_2->addWidget(buttonClose);

        horizontalSpacer_2 = new QSpacerItem(5, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        editor = new Editor(editorView);
        editor->setObjectName(QStringLiteral("editor"));

        verticalLayout_2->addWidget(editor);

        verticalLayout_2->setStretch(1, 1);

        verticalLayout->addWidget(editorView);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 706, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuProject = new QMenu(menuBar);
        menuProject->setObjectName(QStringLiteral("menuProject"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setAllowedAreas(Qt::TopToolBarArea);
        mainToolBar->setIconSize(QSize(24, 24));
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        explorerDock = new QDockWidget(MainWindow);
        explorerDock->setObjectName(QStringLiteral("explorerDock"));
        explorerDock->setFloating(false);
        explorerDock->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_6 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        treeView = new WorkspaceView(dockWidgetContents);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setContextMenuPolicy(Qt::CustomContextMenu);
        treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView->setSortingEnabled(true);
        treeView->setAnimated(true);
        treeView->setHeaderHidden(true);

        verticalLayout_6->addWidget(treeView);

        explorerDock->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), explorerDock);
        outputDock = new QDockWidget(MainWindow);
        outputDock->setObjectName(QStringLiteral("outputDock"));
        outputDock->setFeatures(QDockWidget::DockWidgetClosable);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents_4);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        outputBrowser = new QTextBrowser(dockWidgetContents_4);
        outputBrowser->setObjectName(QStringLiteral("outputBrowser"));

        verticalLayout_3->addWidget(outputBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        clearButton = new QPushButton(dockWidgetContents_4);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        horizontalLayout->addWidget(clearButton);

        run_stopButton = new QPushButton(dockWidgetContents_4);
        run_stopButton->setObjectName(QStringLiteral("run_stopButton"));
        run_stopButton->setEnabled(false);

        horizontalLayout->addWidget(run_stopButton);


        verticalLayout_3->addLayout(horizontalLayout);

        outputDock->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), outputDock);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuProject->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNewModel);
        menuFile->addAction(actionNewProject);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionRename);
        menuFile->addAction(actionRemove);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);
        menuProject->addAction(actionRun);
        menuProject->addAction(actionRunByStep);
        menuEdit->addAction(actionOptions);
        menuEdit->addAction(actionModelBuilder);
        menuEdit->addAction(actionSetWorkspace);
        menuEdit->addAction(actionSynchronize);
        menuView->addAction(actionResetViews);
        mainToolBar->addAction(actionNewProject);
        mainToolBar->addAction(actionNewModel);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionRename);
        mainToolBar->addAction(actionRemove);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionBuilder);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRun);
        mainToolBar->addAction(actionRunByStep);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DengueME", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "&About DengueME", nullptr));
#ifndef QT_NO_SHORTCUT
        actionAbout->setShortcut(QApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "&Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionRun->setText(QApplication::translate("MainWindow", "&Run", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRun->setShortcut(QApplication::translate("MainWindow", "F9, Ctrl+R", nullptr));
#endif // QT_NO_SHORTCUT
        actionProject->setText(QApplication::translate("MainWindow", "Project", nullptr));
        actionModel->setText(QApplication::translate("MainWindow", "Model", nullptr));
        actionNewProject->setText(QApplication::translate("MainWindow", "New &Project", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNewProject->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionEpidemiological->setText(QApplication::translate("MainWindow", "E&pidemiological", nullptr));
        actionCoupled->setText(QApplication::translate("MainWindow", "&Coupled", nullptr));
        actionIntegrated->setText(QApplication::translate("MainWindow", "&Integrated", nullptr));
        actionTemporal->setText(QApplication::translate("MainWindow", "&Temporal", nullptr));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionOptions->setText(QApplication::translate("MainWindow", "&Options", nullptr));
        actionClose->setText(QApplication::translate("MainWindow", "&Close Model ", nullptr));
#ifndef QT_NO_SHORTCUT
        actionClose->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_NO_SHORTCUT
        actionRunByStep->setText(QApplication::translate("MainWindow", "Run &Step by Step", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRunByStep->setShortcut(QApplication::translate("MainWindow", "F10", nullptr));
#endif // QT_NO_SHORTCUT
        actionSetWorkspace->setText(QApplication::translate("MainWindow", "Change &Workspace", nullptr));
        actionRename->setText(QApplication::translate("MainWindow", "&Rename", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRename->setShortcut(QApplication::translate("MainWindow", "F2", nullptr));
#endif // QT_NO_SHORTCUT
        actionRemove->setText(QApplication::translate("MainWindow", "Delete", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRemove->setShortcut(QApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_NO_SHORTCUT
        actionNewModel->setText(QApplication::translate("MainWindow", "New &Model", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNewModel->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionModelBuilder->setText(QApplication::translate("MainWindow", "&Construtor de Pacote de Modelos", nullptr));
#ifndef QT_NO_SHORTCUT
        actionModelBuilder->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_NO_SHORTCUT
        actionResetViews->setText(QApplication::translate("MainWindow", "Reset Views", nullptr));
        actionBuilder->setText(QApplication::translate("MainWindow", "Model Builder", nullptr));
        actionSynchronize->setText(QApplication::translate("MainWindow", "Update Models Library", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSynchronize->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpenExplorer->setText(QApplication::translate("MainWindow", "Open in Explorer", nullptr));
        modelFile->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        buttonDefault->setText(QApplication::translate("MainWindow", "Default Values", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", nullptr));
        menuProject->setTitle(QApplication::translate("MainWindow", "&Project", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "&Tools", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "Window", nullptr));
        explorerDock->setWindowTitle(QApplication::translate("MainWindow", "Projects", nullptr));
        outputDock->setWindowTitle(QApplication::translate("MainWindow", "Console", nullptr));
        clearButton->setText(QApplication::translate("MainWindow", "Clear Console", nullptr));
        run_stopButton->setText(QApplication::translate("MainWindow", "Run", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
