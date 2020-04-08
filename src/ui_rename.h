/********************************************************************************
** Form generated from reading UI file 'rename.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAME_H
#define UI_RENAME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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

class Ui_RenameModel
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *topPanel;
    QVBoxLayout *verticalLayout;
    QLabel *modelName;
    QLabel *modelNameDescription;
    QGridLayout *gridLayout_4;
    QLabel *error_message;
    QLabel *name;
    QLineEdit *namelineEdit;
    QSpacerItem *verticalSpacer;
    QWidget *footerPanel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *RenameModel)
    {
        if (RenameModel->objectName().isEmpty())
            RenameModel->setObjectName(QStringLiteral("RenameModel"));
        RenameModel->setWindowModality(Qt::NonModal);
        RenameModel->resize(630, 290);
        RenameModel->setMinimumSize(QSize(630, 290));
        RenameModel->setMaximumSize(QSize(630, 290));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/rename.png"), QSize(), QIcon::Normal, QIcon::On);
        RenameModel->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(RenameModel);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        topPanel = new QWidget(RenameModel);
        topPanel->setObjectName(QStringLiteral("topPanel"));
        topPanel->setStyleSheet(QStringLiteral("#topPanel { background-color: qlineargradient(spread:reflect, x1:0.5, y1:0, x2:0, y2:0, stop:0 rgba(91, 204, 233, 100), stop:1 rgba(32, 80, 96, 100)); }"));
        verticalLayout = new QVBoxLayout(topPanel);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        modelName = new QLabel(topPanel);
        modelName->setObjectName(QStringLiteral("modelName"));
        modelName->setMinimumSize(QSize(0, 25));
        modelName->setStyleSheet(QLatin1String("font-weight: bold;\n"
"padding: 5px 5px 5px 5px;"));

        verticalLayout->addWidget(modelName);

        modelNameDescription = new QLabel(topPanel);
        modelNameDescription->setObjectName(QStringLiteral("modelNameDescription"));
        modelNameDescription->setMinimumSize(QSize(0, 25));
        modelNameDescription->setStyleSheet(QStringLiteral("padding: 0px 0px 0px 15px;"));

        verticalLayout->addWidget(modelNameDescription);


        verticalLayout_2->addWidget(topPanel);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(12, 12, 12, -1);
        error_message = new QLabel(RenameModel);
        error_message->setObjectName(QStringLiteral("error_message"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(error_message->sizePolicy().hasHeightForWidth());
        error_message->setSizePolicy(sizePolicy);
        error_message->setStyleSheet(QStringLiteral("color: red;"));

        gridLayout_4->addWidget(error_message, 1, 1, 1, 1);

        name = new QLabel(RenameModel);
        name->setObjectName(QStringLiteral("name"));
        sizePolicy.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy);
        name->setMinimumSize(QSize(0, 25));

        gridLayout_4->addWidget(name, 0, 0, 1, 1);

        namelineEdit = new QLineEdit(RenameModel);
        namelineEdit->setObjectName(QStringLiteral("namelineEdit"));
        namelineEdit->setMinimumSize(QSize(0, 25));
        namelineEdit->setMaxLength(40);

        gridLayout_4->addWidget(namelineEdit, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        footerPanel = new QWidget(RenameModel);
        footerPanel->setObjectName(QStringLiteral("footerPanel"));
        footerPanel->setStyleSheet(QLatin1String("#footerPanel {\n"
"  background-color: rgb(227, 227, 227);\n"
"}"));
        horizontalLayout = new QHBoxLayout(footerPanel);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(footerPanel);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setFocusPolicy(Qt::TabFocus);

        horizontalLayout->addWidget(cancelButton);

        okButton = new QPushButton(footerPanel);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setAutoDefault(false);

        horizontalLayout->addWidget(okButton);


        verticalLayout_2->addWidget(footerPanel);

        QWidget::setTabOrder(cancelButton, okButton);

        retranslateUi(RenameModel);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(RenameModel);
    } // setupUi

    void retranslateUi(QDialog *RenameModel)
    {
        RenameModel->setWindowTitle(QApplication::translate("RenameModel", "Rename Model", nullptr));
        modelName->setText(QApplication::translate("RenameModel", "Model Name", nullptr));
        modelNameDescription->setText(QApplication::translate("RenameModel", "Define a new name for your model.", nullptr));
        error_message->setText(QApplication::translate("RenameModel", "Error", nullptr));
        name->setText(QApplication::translate("RenameModel", "Name:", nullptr));
        namelineEdit->setPlaceholderText(QApplication::translate("RenameModel", "e.g. mymodel", nullptr));
        cancelButton->setText(QApplication::translate("RenameModel", "Cancel", nullptr));
        okButton->setText(QApplication::translate("RenameModel", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RenameModel: public Ui_RenameModel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENAME_H
