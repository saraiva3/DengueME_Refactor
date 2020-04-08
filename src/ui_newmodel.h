/********************************************************************************
** Form generated from reading UI file 'newmodel.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWMODEL_H
#define UI_NEWMODEL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewModel
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *modelProjectPge;
    QVBoxLayout *verticalLayout_7;
    QWidget *topPanel2;
    QVBoxLayout *verticalLayout_3;
    QLabel *newmodel_2;
    QLabel *ndemodeldescri_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_6;
    QListWidget *projectslistWidget;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QWidget *footerPanel2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cancelButtonPage1;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *nextButtonPage1;
    QWidget *modelType;
    QVBoxLayout *verticalLayout_8;
    QWidget *topPanel1;
    QVBoxLayout *verticalLayout_2;
    QLabel *newmodel;
    QLabel *ndemodeldescri;
    QHBoxLayout *typelayout;
    QWidget *topWidgetArea;
    QHBoxLayout *horizontalLayout_5;
    QLabel *icon_project;
    QLabel *ProjectLabel;
    QLabel *project_name;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *typeLabel;
    QComboBox *typeComboBox;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *labels;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QListWidget *modelNameslistWidget;
    QTextBrowser *modelDescription;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_11;
    QGridLayout *gridLayout;
    QLineEdit *idLineEdit;
    QLabel *idLabel;
    QLabel *error_idLabel;
    QWidget *footerPanel1;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButtonType;
    QSpacerItem *horizontalSpacer;
    QPushButton *previousButton;
    QPushButton *createButton;

    void setupUi(QDialog *NewModel)
    {
        if (NewModel->objectName().isEmpty())
            NewModel->setObjectName(QStringLiteral("NewModel"));
        NewModel->setWindowModality(Qt::NonModal);
        NewModel->resize(630, 557);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewModel->sizePolicy().hasHeightForWidth());
        NewModel->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/model-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewModel->setWindowIcon(icon);
        NewModel->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(NewModel);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(NewModel);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        modelProjectPge = new QWidget();
        modelProjectPge->setObjectName(QStringLiteral("modelProjectPge"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(modelProjectPge->sizePolicy().hasHeightForWidth());
        modelProjectPge->setSizePolicy(sizePolicy1);
        modelProjectPge->setMouseTracking(false);
        modelProjectPge->setFocusPolicy(Qt::NoFocus);
        modelProjectPge->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_7 = new QVBoxLayout(modelProjectPge);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        topPanel2 = new QWidget(modelProjectPge);
        topPanel2->setObjectName(QStringLiteral("topPanel2"));
        topPanel2->setStyleSheet(QStringLiteral("#topPanel2{ background-color: qlineargradient(spread:reflect, x1:0.5, y1:0, x2:0, y2:0, stop:0 rgba(91, 204, 233, 100), stop:1 rgba(32, 80, 96, 100)); }"));
        verticalLayout_3 = new QVBoxLayout(topPanel2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        newmodel_2 = new QLabel(topPanel2);
        newmodel_2->setObjectName(QStringLiteral("newmodel_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(newmodel_2->sizePolicy().hasHeightForWidth());
        newmodel_2->setSizePolicy(sizePolicy2);
        newmodel_2->setMinimumSize(QSize(0, 25));
        newmodel_2->setStyleSheet(QLatin1String("font-weight: bold;\n"
"padding: 5px 5px 5px 5px;"));

        verticalLayout_3->addWidget(newmodel_2);

        ndemodeldescri_2 = new QLabel(topPanel2);
        ndemodeldescri_2->setObjectName(QStringLiteral("ndemodeldescri_2"));
        ndemodeldescri_2->setMinimumSize(QSize(0, 25));
        ndemodeldescri_2->setStyleSheet(QStringLiteral("padding: 0px 0px 0px 15px;"));

        verticalLayout_3->addWidget(ndemodeldescri_2);


        verticalLayout_7->addWidget(topPanel2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(12, -1, 12, -1);
        label_3 = new QLabel(modelProjectPge);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font-weight: bold;"));

        verticalLayout_4->addWidget(label_3);


        verticalLayout_7->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(12, 0, 12, -1);
        label_4 = new QLabel(modelProjectPge);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_5->addWidget(label_4);


        verticalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(12, -1, 12, -1);
        projectslistWidget = new QListWidget(modelProjectPge);
        projectslistWidget->setObjectName(QStringLiteral("projectslistWidget"));
        projectslistWidget->setStyleSheet(QStringLiteral(""));

        verticalLayout_6->addWidget(projectslistWidget);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalSpacer = new QSpacerItem(50, 45, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(12, 12, 12, -1);

        verticalLayout_7->addLayout(horizontalLayout_3);

        footerPanel2 = new QWidget(modelProjectPge);
        footerPanel2->setObjectName(QStringLiteral("footerPanel2"));
        footerPanel2->setStyleSheet(QLatin1String("#footerPanel2 {\n"
"  background-color: rgb(227, 227, 227);\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(footerPanel2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(12, 12, 12, 12);
        cancelButtonPage1 = new QPushButton(footerPanel2);
        cancelButtonPage1->setObjectName(QStringLiteral("cancelButtonPage1"));
        cancelButtonPage1->setAutoDefault(true);

        horizontalLayout_2->addWidget(cancelButtonPage1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        nextButtonPage1 = new QPushButton(footerPanel2);
        nextButtonPage1->setObjectName(QStringLiteral("nextButtonPage1"));
        nextButtonPage1->setAutoDefault(false);

        horizontalLayout_2->addWidget(nextButtonPage1);


        verticalLayout_7->addWidget(footerPanel2);

        stackedWidget->addWidget(modelProjectPge);
        modelType = new QWidget();
        modelType->setObjectName(QStringLiteral("modelType"));
        sizePolicy1.setHeightForWidth(modelType->sizePolicy().hasHeightForWidth());
        modelType->setSizePolicy(sizePolicy1);
        modelType->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_8 = new QVBoxLayout(modelType);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        topPanel1 = new QWidget(modelType);
        topPanel1->setObjectName(QStringLiteral("topPanel1"));
        topPanel1->setMinimumSize(QSize(0, 61));
        topPanel1->setStyleSheet(QStringLiteral("#topPanel1 { background-color: qlineargradient(spread:reflect, x1:0.5, y1:0, x2:0, y2:0, stop:0 rgba(91, 204, 233, 100), stop:1 rgba(32, 80, 96, 100)); }"));
        verticalLayout_2 = new QVBoxLayout(topPanel1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        newmodel = new QLabel(topPanel1);
        newmodel->setObjectName(QStringLiteral("newmodel"));
        sizePolicy2.setHeightForWidth(newmodel->sizePolicy().hasHeightForWidth());
        newmodel->setSizePolicy(sizePolicy2);
        newmodel->setMinimumSize(QSize(0, 25));
        newmodel->setStyleSheet(QLatin1String("font-weight: bold;\n"
"padding: 5px 5px 5px 5px;"));

        verticalLayout_2->addWidget(newmodel);

        ndemodeldescri = new QLabel(topPanel1);
        ndemodeldescri->setObjectName(QStringLiteral("ndemodeldescri"));
        ndemodeldescri->setMinimumSize(QSize(0, 25));
        ndemodeldescri->setStyleSheet(QStringLiteral("padding: 0px 0px 0px 15px;"));

        verticalLayout_2->addWidget(ndemodeldescri);


        verticalLayout_8->addWidget(topPanel1);

        typelayout = new QHBoxLayout();
        typelayout->setObjectName(QStringLiteral("typelayout"));
        typelayout->setContentsMargins(12, 12, 12, 12);
        topWidgetArea = new QWidget(modelType);
        topWidgetArea->setObjectName(QStringLiteral("topWidgetArea"));
        topWidgetArea->setStyleSheet(QLatin1String("#topWidgetArea {\n"
"  border: 1px solid rgb(193, 193, 193);\n"
"  background-color: rgb(227, 227, 227);\n"
"}"));
        horizontalLayout_5 = new QHBoxLayout(topWidgetArea);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(6, 6, 6, 6);
        icon_project = new QLabel(topWidgetArea);
        icon_project->setObjectName(QStringLiteral("icon_project"));

        horizontalLayout_5->addWidget(icon_project);

        ProjectLabel = new QLabel(topWidgetArea);
        ProjectLabel->setObjectName(QStringLiteral("ProjectLabel"));
        ProjectLabel->setStyleSheet(QStringLiteral("font-weight: bold;"));

        horizontalLayout_5->addWidget(ProjectLabel);

        project_name = new QLabel(topWidgetArea);
        project_name->setObjectName(QStringLiteral("project_name"));

        horizontalLayout_5->addWidget(project_name);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        typelayout->addWidget(topWidgetArea);


        verticalLayout_8->addLayout(typelayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(12, 0, 12, -1);
        typeLabel = new QLabel(modelType);
        typeLabel->setObjectName(QStringLiteral("typeLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(typeLabel->sizePolicy().hasHeightForWidth());
        typeLabel->setSizePolicy(sizePolicy3);
        typeLabel->setStyleSheet(QStringLiteral(""));

        horizontalLayout_6->addWidget(typeLabel);

        typeComboBox = new QComboBox(modelType);
        typeComboBox->setObjectName(QStringLiteral("typeComboBox"));
        sizePolicy3.setHeightForWidth(typeComboBox->sizePolicy().hasHeightForWidth());
        typeComboBox->setSizePolicy(sizePolicy3);
        typeComboBox->setMinimumSize(QSize(200, 0));

        horizontalLayout_6->addWidget(typeComboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_8->addLayout(horizontalLayout_6);

        labels = new QHBoxLayout();
        labels->setObjectName(QStringLiteral("labels"));
        labels->setContentsMargins(12, -1, 12, 5);
        label_2 = new QLabel(modelType);
        label_2->setObjectName(QStringLiteral("label_2"));

        labels->addWidget(label_2);

        label = new QLabel(modelType);
        label->setObjectName(QStringLiteral("label"));

        labels->addWidget(label);


        verticalLayout_8->addLayout(labels);

        horizontalLayout_4 = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout_4->setSpacing(-1);
#endif
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(12, 0, 12, 0);
        modelNameslistWidget = new QListWidget(modelType);
        modelNameslistWidget->setObjectName(QStringLiteral("modelNameslistWidget"));
        sizePolicy1.setHeightForWidth(modelNameslistWidget->sizePolicy().hasHeightForWidth());
        modelNameslistWidget->setSizePolicy(sizePolicy1);
        modelNameslistWidget->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(modelNameslistWidget);

        modelDescription = new QTextBrowser(modelType);
        modelDescription->setObjectName(QStringLiteral("modelDescription"));
        sizePolicy1.setHeightForWidth(modelDescription->sizePolicy().hasHeightForWidth());
        modelDescription->setSizePolicy(sizePolicy1);
        modelDescription->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(modelDescription);


        verticalLayout_8->addLayout(horizontalLayout_4);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(12, 12, 12, -1);
        label_11 = new QLabel(modelType);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_13->addWidget(label_11);


        verticalLayout_8->addLayout(verticalLayout_13);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(12, 0, 12, -1);
        idLineEdit = new QLineEdit(modelType);
        idLineEdit->setObjectName(QStringLiteral("idLineEdit"));

        gridLayout->addWidget(idLineEdit, 0, 1, 1, 1);

        idLabel = new QLabel(modelType);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        idLabel->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(idLabel, 0, 0, 1, 1);

        error_idLabel = new QLabel(modelType);
        error_idLabel->setObjectName(QStringLiteral("error_idLabel"));
        error_idLabel->setStyleSheet(QStringLiteral("color: red;"));

        gridLayout->addWidget(error_idLabel, 1, 1, 1, 1);


        verticalLayout_8->addLayout(gridLayout);

        footerPanel1 = new QWidget(modelType);
        footerPanel1->setObjectName(QStringLiteral("footerPanel1"));
        footerPanel1->setStyleSheet(QLatin1String("#footerPanel1 {\n"
"  background-color: rgb(227, 227, 227);\n"
"}"));
        horizontalLayout = new QHBoxLayout(footerPanel1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(12, 12, 12, 12);
        cancelButtonType = new QPushButton(footerPanel1);
        cancelButtonType->setObjectName(QStringLiteral("cancelButtonType"));
        cancelButtonType->setAutoDefault(true);

        horizontalLayout->addWidget(cancelButtonType);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        previousButton = new QPushButton(footerPanel1);
        previousButton->setObjectName(QStringLiteral("previousButton"));
        previousButton->setAutoDefault(true);

        horizontalLayout->addWidget(previousButton);

        createButton = new QPushButton(footerPanel1);
        createButton->setObjectName(QStringLiteral("createButton"));
        createButton->setAutoDefault(true);

        horizontalLayout->addWidget(createButton);


        verticalLayout_8->addWidget(footerPanel1);

        stackedWidget->addWidget(modelType);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(NewModel);

        stackedWidget->setCurrentIndex(0);
        nextButtonPage1->setDefault(true);
        createButton->setDefault(false);


        QMetaObject::connectSlotsByName(NewModel);
    } // setupUi

    void retranslateUi(QDialog *NewModel)
    {
        NewModel->setWindowTitle(QApplication::translate("NewModel", "New Model", nullptr));
        newmodel_2->setText(QApplication::translate("NewModel", "New Model", nullptr));
        ndemodeldescri_2->setText(QApplication::translate("NewModel", "Select the project of your new model.", nullptr));
        label_3->setText(QApplication::translate("NewModel", "Projects", nullptr));
        label_4->setText(QApplication::translate("NewModel", "Choose the project in which the new model will be created.", nullptr));
        cancelButtonPage1->setText(QApplication::translate("NewModel", "Cancel", nullptr));
        nextButtonPage1->setText(QApplication::translate("NewModel", "Next", nullptr));
        newmodel->setText(QApplication::translate("NewModel", "New Model", nullptr));
        ndemodeldescri->setText(QApplication::translate("NewModel", "Select a model and define its name.", nullptr));
        icon_project->setText(QApplication::translate("NewModel", "Icon", nullptr));
        ProjectLabel->setText(QApplication::translate("NewModel", "Project:", nullptr));
        project_name->setText(QApplication::translate("NewModel", "Project Name", nullptr));
        typeLabel->setText(QApplication::translate("NewModel", "Category:", nullptr));
        label_2->setText(QApplication::translate("NewModel", "Models:", nullptr));
        label->setText(QApplication::translate("NewModel", "Description:", nullptr));
        label_11->setText(QApplication::translate("NewModel", "Define a name (unique identifier) for your new model.", nullptr));
        idLineEdit->setPlaceholderText(QApplication::translate("NewModel", "e.g. mySirModel", nullptr));
        idLabel->setText(QApplication::translate("NewModel", "Name (ID):", nullptr));
        error_idLabel->setText(QApplication::translate("NewModel", "error", nullptr));
        cancelButtonType->setText(QApplication::translate("NewModel", "Cancel", nullptr));
        previousButton->setText(QApplication::translate("NewModel", "Previous", nullptr));
        createButton->setText(QApplication::translate("NewModel", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewModel: public Ui_NewModel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMODEL_H
