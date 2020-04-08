/********************************************************************************
** Form generated from reading UI file 'modelbuilder.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELBUILDER_H
#define UI_MODELBUILDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <workspaceview.h>
#include "editor.h"

QT_BEGIN_NAMESPACE

class Ui_ModelBuilder
{
public:
    QAction *actionExit;
    QAction *actionSave;
    QAction *actionDelete;
    QAction *actionNew;
    QAction *actionEdit;
    QAction *actionCloseModel;
    QAction *actionHelp;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    WorkspaceView *listView;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *modelFile;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonEditor;
    QPushButton *buttonDescription;
    Editor *editor;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ModelBuilder)
    {
        if (ModelBuilder->objectName().isEmpty())
            ModelBuilder->setObjectName(QStringLiteral("ModelBuilder"));
        ModelBuilder->setWindowModality(Qt::WindowModal);
        ModelBuilder->resize(1000, 600);
        actionExit = new QAction(ModelBuilder);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/Resources/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon);
        actionSave = new QAction(ModelBuilder);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/Resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionDelete = new QAction(ModelBuilder);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/Resources/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon2);
        actionNew = new QAction(ModelBuilder);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/Resources/model-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon3);
        actionEdit = new QAction(ModelBuilder);
        actionEdit->setObjectName(QStringLiteral("actionEdit"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/Resources/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit->setIcon(icon4);
        actionCloseModel = new QAction(ModelBuilder);
        actionCloseModel->setObjectName(QStringLiteral("actionCloseModel"));
        actionCloseModel->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCloseModel->setIcon(icon5);
        actionHelp = new QAction(ModelBuilder);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon6);
        centralwidget = new QWidget(ModelBuilder);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        listView = new WorkspaceView(page);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        listView->setIndentation(4);
        listView->setRootIsDecorated(false);
        listView->setSortingEnabled(true);
        listView->setHeaderHidden(true);

        verticalLayout_3->addWidget(listView);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        modelFile = new QLabel(page_2);
        modelFile->setObjectName(QStringLiteral("modelFile"));
        modelFile->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(modelFile);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonEditor = new QPushButton(page_2);
        buttonEditor->setObjectName(QStringLiteral("buttonEditor"));

        horizontalLayout_2->addWidget(buttonEditor);

        buttonDescription = new QPushButton(page_2);
        buttonDescription->setObjectName(QStringLiteral("buttonDescription"));

        horizontalLayout_2->addWidget(buttonDescription);


        verticalLayout_2->addLayout(horizontalLayout_2);

        editor = new Editor(page_2);
        editor->setObjectName(QStringLiteral("editor"));

        verticalLayout_2->addWidget(editor);

        verticalLayout_2->setStretch(1, 1);
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        ModelBuilder->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ModelBuilder);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        ModelBuilder->setMenuBar(menubar);
        toolBar = new QToolBar(ModelBuilder);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        ModelBuilder->addToolBar(Qt::LeftToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addSeparator();
        menuFile->addAction(actionEdit);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionDelete);
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionHelp);

        retranslateUi(ModelBuilder);
        QObject::connect(actionExit, SIGNAL(triggered()), ModelBuilder, SLOT(close()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ModelBuilder);
    } // setupUi

    void retranslateUi(QMainWindow *ModelBuilder)
    {
        ModelBuilder->setWindowTitle(QApplication::translate("ModelBuilder", "MainWindow", nullptr));
        actionExit->setText(QApplication::translate("ModelBuilder", "E&xit", nullptr));
        actionSave->setText(QApplication::translate("ModelBuilder", "&Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("ModelBuilder", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionDelete->setText(QApplication::translate("ModelBuilder", "&Delete", nullptr));
#ifndef QT_NO_SHORTCUT
        actionDelete->setShortcut(QApplication::translate("ModelBuilder", "Del", nullptr));
#endif // QT_NO_SHORTCUT
        actionNew->setText(QApplication::translate("ModelBuilder", "&New", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("ModelBuilder", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionEdit->setText(QApplication::translate("ModelBuilder", "&Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionEdit->setShortcut(QApplication::translate("ModelBuilder", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        actionCloseModel->setText(QApplication::translate("ModelBuilder", "actionCloseModel", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCloseModel->setShortcut(QApplication::translate("ModelBuilder", "Ctrl+W", nullptr));
#endif // QT_NO_SHORTCUT
        actionHelp->setText(QApplication::translate("ModelBuilder", "Help", nullptr));
        label_2->setText(QApplication::translate("ModelBuilder", "Personal library of models", nullptr));
        modelFile->setText(QApplication::translate("ModelBuilder", "TextLabel", nullptr));
        buttonEditor->setText(QApplication::translate("ModelBuilder", "Model Editor", nullptr));
        buttonDescription->setText(QApplication::translate("ModelBuilder", "Model Documentation", nullptr));
        menuFile->setTitle(QApplication::translate("ModelBuilder", "Fi&le", nullptr));
        menuHelp->setTitle(QApplication::translate("ModelBuilder", "Help", nullptr));
        toolBar->setWindowTitle(QApplication::translate("ModelBuilder", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModelBuilder: public Ui_ModelBuilder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELBUILDER_H
