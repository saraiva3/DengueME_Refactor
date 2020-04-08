/********************************************************************************
** Form generated from reading UI file 'changeworkspace.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEWORKSPACE_H
#define UI_CHANGEWORKSPACE_H

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

class Ui_ChangeWorkspace
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *topPanel;
    QVBoxLayout *verticalLayout_2;
    QLabel *project_label;
    QLabel *project_description;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QLabel *error_message;
    QLabel *workspaceLabel;
    QPushButton *browseButton;
    QLineEdit *workspaceLineEdit;
    QHBoxLayout *horizontalLayout;
    QCheckBox *defaultCheckBox;
    QSpacerItem *verticalSpacer;
    QWidget *footerPanel;
    QHBoxLayout *footerPanel_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *ChangeWorkspace)
    {
        if (ChangeWorkspace->objectName().isEmpty())
            ChangeWorkspace->setObjectName(QStringLiteral("ChangeWorkspace"));
        ChangeWorkspace->setWindowModality(Qt::ApplicationModal);
        ChangeWorkspace->resize(630, 290);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ChangeWorkspace->sizePolicy().hasHeightForWidth());
        ChangeWorkspace->setSizePolicy(sizePolicy);
        ChangeWorkspace->setMinimumSize(QSize(630, 290));
        ChangeWorkspace->setMaximumSize(QSize(630, 290));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChangeWorkspace->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ChangeWorkspace);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        topPanel = new QWidget(ChangeWorkspace);
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

        label = new QLabel(topPanel);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 25));
        label->setToolTipDuration(-1);
        label->setStyleSheet(QStringLiteral("padding: 0px 0px 0px 15px;"));

        verticalLayout_2->addWidget(label);


        verticalLayout->addWidget(topPanel);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(12, 12, 12, -1);
        error_message = new QLabel(ChangeWorkspace);
        error_message->setObjectName(QStringLiteral("error_message"));
        error_message->setStyleSheet(QStringLiteral("color: red;"));

        gridLayout_2->addWidget(error_message, 1, 1, 1, 1);

        workspaceLabel = new QLabel(ChangeWorkspace);
        workspaceLabel->setObjectName(QStringLiteral("workspaceLabel"));
        workspaceLabel->setMinimumSize(QSize(0, 25));

        gridLayout_2->addWidget(workspaceLabel, 0, 0, 1, 1);

        browseButton = new QPushButton(ChangeWorkspace);
        browseButton->setObjectName(QStringLiteral("browseButton"));
        browseButton->setAutoDefault(true);
        browseButton->setFlat(false);

        gridLayout_2->addWidget(browseButton, 0, 2, 1, 1);

        workspaceLineEdit = new QLineEdit(ChangeWorkspace);
        workspaceLineEdit->setObjectName(QStringLiteral("workspaceLineEdit"));
        workspaceLineEdit->setMinimumSize(QSize(0, 25));
        workspaceLineEdit->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(workspaceLineEdit, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(12, 0, 12, -1);
        defaultCheckBox = new QCheckBox(ChangeWorkspace);
        defaultCheckBox->setObjectName(QStringLiteral("defaultCheckBox"));

        horizontalLayout->addWidget(defaultCheckBox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        footerPanel = new QWidget(ChangeWorkspace);
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

        retranslateUi(ChangeWorkspace);

        browseButton->setDefault(true);
        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(ChangeWorkspace);
    } // setupUi

    void retranslateUi(QDialog *ChangeWorkspace)
    {
        ChangeWorkspace->setWindowTitle(QApplication::translate("ChangeWorkspace", "Change Workspace", nullptr));
        project_label->setText(QApplication::translate("ChangeWorkspace", "Workspace", nullptr));
        project_description->setText(QApplication::translate("ChangeWorkspace", "DengueME will save your projects inside a folder called workspace. ", nullptr));
        label->setText(QApplication::translate("ChangeWorkspace", "Choose the folder to be used as workspace.", nullptr));
        error_message->setText(QApplication::translate("ChangeWorkspace", "error", nullptr));
        workspaceLabel->setText(QApplication::translate("ChangeWorkspace", "Workspace (path):", nullptr));
        browseButton->setText(QApplication::translate("ChangeWorkspace", "Browse", nullptr));
        workspaceLineEdit->setText(QString());
        workspaceLineEdit->setPlaceholderText(QApplication::translate("ChangeWorkspace", "d:\\DengueME\\workspace", nullptr));
        defaultCheckBox->setText(QApplication::translate("ChangeWorkspace", "Use as a default workspace.", nullptr));
        cancelButton->setText(QApplication::translate("ChangeWorkspace", "Cancel", nullptr));
        okButton->setText(QApplication::translate("ChangeWorkspace", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeWorkspace: public Ui_ChangeWorkspace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEWORKSPACE_H
