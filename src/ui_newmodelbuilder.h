/********************************************************************************
** Form generated from reading UI file 'newmodelbuilder.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWMODELBUILDER_H
#define UI_NEWMODELBUILDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewModelBuilder
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *headerPanel;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *Category;
    QLabel *label_3;
    QComboBox *categoriesComboBox;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *nameTextLabel;
    QLabel *label_4;
    QGridLayout *Name;
    QLabel *nameLabel;
    QLabel *errorLabelName;
    QLineEdit *nameLineEdit;
    QSpacerItem *verticalSpacer;
    QWidget *footerPanel;
    QHBoxLayout *foo;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *createButton;

    void setupUi(QDialog *NewModelBuilder)
    {
        if (NewModelBuilder->objectName().isEmpty())
            NewModelBuilder->setObjectName(QStringLiteral("NewModelBuilder"));
        NewModelBuilder->setWindowModality(Qt::ApplicationModal);
        NewModelBuilder->resize(630, 290);
        NewModelBuilder->setMinimumSize(QSize(630, 290));
        NewModelBuilder->setMaximumSize(QSize(630, 290));
        verticalLayout_2 = new QVBoxLayout(NewModelBuilder);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        headerPanel = new QWidget(NewModelBuilder);
        headerPanel->setObjectName(QStringLiteral("headerPanel"));
        headerPanel->setMinimumSize(QSize(0, 61));
        headerPanel->setMaximumSize(QSize(16777215, 61));
        headerPanel->setStyleSheet(QStringLiteral("#headerPanel{ background-color: qlineargradient(spread:reflect, x1:0.5, y1:0, x2:0, y2:0, stop:0 rgba(91, 204, 233, 100), stop:1 rgba(32, 80, 96, 100)); }"));
        verticalLayout = new QVBoxLayout(headerPanel);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(-1);
#endif
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(headerPanel);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 25));
        label->setStyleSheet(QLatin1String("font-weight: bold;\n"
"padding: 5px 5px 5px 5px;"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(headerPanel);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(0, 25));
        label_2->setStyleSheet(QStringLiteral("padding: 0px 0px 0px 15px;"));

        verticalLayout->addWidget(label_2);


        verticalLayout_2->addWidget(headerPanel);

        Category = new QHBoxLayout();
        Category->setObjectName(QStringLiteral("Category"));
        Category->setContentsMargins(12, 12, 12, -1);
        label_3 = new QLabel(NewModelBuilder);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        Category->addWidget(label_3);

        categoriesComboBox = new QComboBox(NewModelBuilder);
        categoriesComboBox->setObjectName(QStringLiteral("categoriesComboBox"));
        sizePolicy.setHeightForWidth(categoriesComboBox->sizePolicy().hasHeightForWidth());
        categoriesComboBox->setSizePolicy(sizePolicy);
        categoriesComboBox->setMinimumSize(QSize(200, 0));
        categoriesComboBox->setMaximumSize(QSize(200, 16777215));

        Category->addWidget(categoriesComboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Category->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(Category);

        nameTextLabel = new QVBoxLayout();
        nameTextLabel->setObjectName(QStringLiteral("nameTextLabel"));
        nameTextLabel->setContentsMargins(12, 12, 12, -1);
        label_4 = new QLabel(NewModelBuilder);
        label_4->setObjectName(QStringLiteral("label_4"));

        nameTextLabel->addWidget(label_4);


        verticalLayout_2->addLayout(nameTextLabel);

        Name = new QGridLayout();
        Name->setObjectName(QStringLiteral("Name"));
        Name->setContentsMargins(12, 0, 12, 12);
        nameLabel = new QLabel(NewModelBuilder);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        Name->addWidget(nameLabel, 0, 0, 1, 1);

        errorLabelName = new QLabel(NewModelBuilder);
        errorLabelName->setObjectName(QStringLiteral("errorLabelName"));
        errorLabelName->setStyleSheet(QStringLiteral("color: red;"));

        Name->addWidget(errorLabelName, 1, 1, 1, 1);

        nameLineEdit = new QLineEdit(NewModelBuilder);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        Name->addWidget(nameLineEdit, 0, 1, 1, 1);


        verticalLayout_2->addLayout(Name);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        footerPanel = new QWidget(NewModelBuilder);
        footerPanel->setObjectName(QStringLiteral("footerPanel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(footerPanel->sizePolicy().hasHeightForWidth());
        footerPanel->setSizePolicy(sizePolicy1);
        footerPanel->setMinimumSize(QSize(0, 45));
        footerPanel->setMaximumSize(QSize(16777215, 45));
        footerPanel->setStyleSheet(QLatin1String("#footerPanel {\n"
"  background-color: rgb(227, 227, 227);\n"
"}"));
        foo = new QHBoxLayout(footerPanel);
        foo->setObjectName(QStringLiteral("foo"));
        foo->setContentsMargins(12, 12, 12, 12);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        foo->addItem(horizontalSpacer);

        cancelButton = new QPushButton(footerPanel);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        foo->addWidget(cancelButton);

        createButton = new QPushButton(footerPanel);
        createButton->setObjectName(QStringLiteral("createButton"));
        createButton->setAutoDefault(false);

        foo->addWidget(createButton);


        verticalLayout_2->addWidget(footerPanel);


        retranslateUi(NewModelBuilder);

        createButton->setDefault(true);


        QMetaObject::connectSlotsByName(NewModelBuilder);
    } // setupUi

    void retranslateUi(QDialog *NewModelBuilder)
    {
        NewModelBuilder->setWindowTitle(QApplication::translate("NewModelBuilder", "Model Builder - New Model", nullptr));
        label->setText(QApplication::translate("NewModelBuilder", "New Model", nullptr));
        label_2->setText(QApplication::translate("NewModelBuilder", "Select the category in which the model will be created and define its name.", nullptr));
        label_3->setText(QApplication::translate("NewModelBuilder", "Category:", nullptr));
        label_4->setText(QApplication::translate("NewModelBuilder", "Define a name (unique identifier) for your new model", nullptr));
        nameLabel->setText(QApplication::translate("NewModelBuilder", "Name (ID):", nullptr));
        errorLabelName->setText(QApplication::translate("NewModelBuilder", "ErrorArea", nullptr));
        nameLineEdit->setText(QString());
        nameLineEdit->setPlaceholderText(QApplication::translate("NewModelBuilder", "e.g. sirModel", nullptr));
        cancelButton->setText(QApplication::translate("NewModelBuilder", "Cancel", nullptr));
        createButton->setText(QApplication::translate("NewModelBuilder", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewModelBuilder: public Ui_NewModelBuilder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMODELBUILDER_H
