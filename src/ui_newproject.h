/********************************************************************************
** Form generated from reading UI file 'newproject.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROJECT_H
#define UI_NEWPROJECT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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

class Ui_NewProject
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *topPanel;
    QVBoxLayout *verticalLayout_2;
    QLabel *project_label;
    QLabel *project_description;
    QGridLayout *gridLayout;
    QLineEdit *project_name;
    QLabel *project;
    QLabel *error_message;
    QVBoxLayout *bodyPanel;
    QCheckBox *newModelCheckBox;
    QSpacerItem *verticalSpacer;
    QWidget *footerPanel;
    QHBoxLayout *footerPanel_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *NewProject)
    {
        if (NewProject->objectName().isEmpty())
            NewProject->setObjectName(QStringLiteral("NewProject"));
        NewProject->setWindowModality(Qt::NonModal);
        NewProject->resize(630, 290);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewProject->sizePolicy().hasHeightForWidth());
        NewProject->setSizePolicy(sizePolicy);
        NewProject->setMinimumSize(QSize(630, 290));
        NewProject->setMaximumSize(QSize(630, 290));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/folder-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewProject->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(NewProject);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        topPanel = new QWidget(NewProject);
        topPanel->setObjectName(QStringLiteral("topPanel"));
        topPanel->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(topPanel->sizePolicy().hasHeightForWidth());
        topPanel->setSizePolicy(sizePolicy1);
        topPanel->setStyleSheet(QStringLiteral("#topPanel { background-color: qlineargradient(spread:reflect, x1:0.5, y1:0, x2:0, y2:0, stop:0 rgba(91, 204, 233, 100), stop:1 rgba(32, 80, 96, 100)); }"));
        verticalLayout_2 = new QVBoxLayout(topPanel);
#ifndef Q_OS_MAC
        verticalLayout_2->setSpacing(-1);
#endif
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        project_label = new QLabel(topPanel);
        project_label->setObjectName(QStringLiteral("project_label"));
        sizePolicy.setHeightForWidth(project_label->sizePolicy().hasHeightForWidth());
        project_label->setSizePolicy(sizePolicy);
        project_label->setMinimumSize(QSize(0, 25));
        project_label->setStyleSheet(QLatin1String("font-weight: bold;\n"
"padding: 5px 5px 5px 5px;"));

        verticalLayout_2->addWidget(project_label);

        project_description = new QLabel(topPanel);
        project_description->setObjectName(QStringLiteral("project_description"));
        sizePolicy.setHeightForWidth(project_description->sizePolicy().hasHeightForWidth());
        project_description->setSizePolicy(sizePolicy);
        project_description->setMinimumSize(QSize(0, 25));
        project_description->setStyleSheet(QStringLiteral("padding: 0px 0px 0px 15px;"));

        verticalLayout_2->addWidget(project_description);


        verticalLayout->addWidget(topPanel);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(12, 12, 12, -1);
        project_name = new QLineEdit(NewProject);
        project_name->setObjectName(QStringLiteral("project_name"));
        project_name->setMinimumSize(QSize(0, 25));
        project_name->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(project_name, 0, 2, 1, 1);

        project = new QLabel(NewProject);
        project->setObjectName(QStringLiteral("project"));
        project->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(project, 0, 0, 1, 1);

        error_message = new QLabel(NewProject);
        error_message->setObjectName(QStringLiteral("error_message"));
        error_message->setStyleSheet(QStringLiteral("color: red;"));

        gridLayout->addWidget(error_message, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        bodyPanel = new QVBoxLayout();
        bodyPanel->setSpacing(0);
        bodyPanel->setObjectName(QStringLiteral("bodyPanel"));
        bodyPanel->setContentsMargins(12, 0, 12, 0);
        newModelCheckBox = new QCheckBox(NewProject);
        newModelCheckBox->setObjectName(QStringLiteral("newModelCheckBox"));

        bodyPanel->addWidget(newModelCheckBox);


        verticalLayout->addLayout(bodyPanel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        footerPanel = new QWidget(NewProject);
        footerPanel->setObjectName(QStringLiteral("footerPanel"));
        footerPanel->setStyleSheet(QLatin1String("#footerPanel {\n"
"  background-color: rgb(227, 227, 227);\n"
"}"));
        footerPanel_2 = new QHBoxLayout(footerPanel);
        footerPanel_2->setObjectName(QStringLiteral("footerPanel_2"));
        footerPanel_2->setContentsMargins(12, 12, 12, 12);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        footerPanel_2->addItem(horizontalSpacer);

        cancelButton = new QPushButton(footerPanel);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        footerPanel_2->addWidget(cancelButton);

        okButton = new QPushButton(footerPanel);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setAutoDefault(false);

        footerPanel_2->addWidget(okButton);


        verticalLayout->addWidget(footerPanel);

        QWidget::setTabOrder(cancelButton, okButton);

        retranslateUi(NewProject);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(NewProject);
    } // setupUi

    void retranslateUi(QDialog *NewProject)
    {
        NewProject->setWindowTitle(QApplication::translate("NewProject", "New Project", nullptr));
        project_label->setText(QApplication::translate("NewProject", "Project Name", nullptr));
        project_description->setText(QApplication::translate("NewProject", "Define a name for your new project.", nullptr));
        project_name->setText(QString());
        project_name->setPlaceholderText(QApplication::translate("NewProject", "e.g. myproject", nullptr));
        project->setText(QApplication::translate("NewProject", "Name:", nullptr));
        error_message->setText(QApplication::translate("NewProject", "error", nullptr));
        newModelCheckBox->setText(QApplication::translate("NewProject", "I would like to create a new model inside this project.", nullptr));
        cancelButton->setText(QApplication::translate("NewProject", "Cancel", nullptr));
        okButton->setText(QApplication::translate("NewProject", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewProject: public Ui_NewProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROJECT_H
