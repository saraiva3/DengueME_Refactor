/********************************************************************************
** Form generated from reading UI file 'options.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_H
#define UI_OPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Options
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *topPanel1;
    QVBoxLayout *topPanel;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *tabs;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFormLayout *formLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *errorWorksapcePath;
    QCheckBox *startupPathCheckBox;
    QComboBox *languageComboBox;
    QLabel *label;
    QLineEdit *workspaceLineEdit;
    QPushButton *browseWorkspaceButton;
    QHBoxLayout *horizontalLayout;
    QLabel *iconWarning;
    QLabel *warningMessageLabel;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QFormLayout *formLayout_3;
    QGridLayout *gridLayout_2;
    QLineEdit *rLineEdit;
    QLabel *errorTmePath;
    QLabel *label_8;
    QLineEdit *tmeLineEdit;
    QLabel *label_2;
    QPushButton *browseTmeButton;
    QPushButton *browseRButton;
    QLabel *errorRPath;
    QHBoxLayout *horizontalLayout_2;
    QLabel *iconWarningRunLabel;
    QLabel *warningRunLabel;
    QSpacerItem *verticalSpacer_2;
    QWidget *footerPanel;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *Options)
    {
        if (Options->objectName().isEmpty())
            Options->setObjectName(QStringLiteral("Options"));
        Options->resize(630, 345);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Options->sizePolicy().hasHeightForWidth());
        Options->setSizePolicy(sizePolicy);
        Options->setMinimumSize(QSize(630, 345));
        Options->setMaximumSize(QSize(630, 345));
        verticalLayout = new QVBoxLayout(Options);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        topPanel1 = new QWidget(Options);
        topPanel1->setObjectName(QStringLiteral("topPanel1"));
        topPanel1->setStyleSheet(QStringLiteral("#topPanel1 { background-color: qlineargradient(spread:reflect, x1:0.5, y1:0, x2:0, y2:0, stop:0 rgba(91, 204, 233, 100), stop:1 rgba(32, 80, 96, 100)); }"));
        topPanel = new QVBoxLayout(topPanel1);
#ifndef Q_OS_MAC
        topPanel->setSpacing(-1);
#endif
        topPanel->setObjectName(QStringLiteral("topPanel"));
        topPanel->setContentsMargins(0, 0, 0, 5);
        label_3 = new QLabel(topPanel1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font-weight: bold;\n"
"padding: 5px 5px 5px 5px;"));

        topPanel->addWidget(label_3);

        label_4 = new QLabel(topPanel1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("padding: 0px 0px 0px 15px;"));

        topPanel->addWidget(label_4);


        verticalLayout->addWidget(topPanel1);

        tabs = new QVBoxLayout();
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setContentsMargins(12, 12, 12, 12);
        tabWidget = new QTabWidget(Options);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        formLayout_2 = new QFormLayout(tab);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_2->setContentsMargins(6, 12, 12, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        errorWorksapcePath = new QLabel(tab);
        errorWorksapcePath->setObjectName(QStringLiteral("errorWorksapcePath"));
        errorWorksapcePath->setStyleSheet(QStringLiteral("color: red;"));

        gridLayout->addWidget(errorWorksapcePath, 1, 1, 1, 1);

        startupPathCheckBox = new QCheckBox(tab);
        startupPathCheckBox->setObjectName(QStringLiteral("startupPathCheckBox"));

        gridLayout->addWidget(startupPathCheckBox, 2, 1, 1, 1);

        languageComboBox = new QComboBox(tab);
        languageComboBox->setObjectName(QStringLiteral("languageComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(languageComboBox->sizePolicy().hasHeightForWidth());
        languageComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(languageComboBox, 3, 1, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        workspaceLineEdit = new QLineEdit(tab);
        workspaceLineEdit->setObjectName(QStringLiteral("workspaceLineEdit"));

        gridLayout->addWidget(workspaceLineEdit, 0, 1, 1, 1);

        browseWorkspaceButton = new QPushButton(tab);
        browseWorkspaceButton->setObjectName(QStringLiteral("browseWorkspaceButton"));
        browseWorkspaceButton->setMouseTracking(true);

        gridLayout->addWidget(browseWorkspaceButton, 0, 2, 1, 1);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        iconWarning = new QLabel(tab);
        iconWarning->setObjectName(QStringLiteral("iconWarning"));
        iconWarning->setStyleSheet(QStringLiteral("color: rgb(253, 128, 8);"));

        horizontalLayout->addWidget(iconWarning);

        warningMessageLabel = new QLabel(tab);
        warningMessageLabel->setObjectName(QStringLiteral("warningMessageLabel"));
        warningMessageLabel->setStyleSheet(QStringLiteral("color: rgb(253, 128, 8);"));

        horizontalLayout->addWidget(warningMessageLabel);


        formLayout_2->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(1, QFormLayout::FieldRole, verticalSpacer);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        formLayout_3 = new QFormLayout(tab_2);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_3->setContentsMargins(6, -1, 12, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, 0);
        rLineEdit = new QLineEdit(tab_2);
        rLineEdit->setObjectName(QStringLiteral("rLineEdit"));
        sizePolicy1.setHeightForWidth(rLineEdit->sizePolicy().hasHeightForWidth());
        rLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(rLineEdit, 2, 1, 1, 1);

        errorTmePath = new QLabel(tab_2);
        errorTmePath->setObjectName(QStringLiteral("errorTmePath"));
        errorTmePath->setStyleSheet(QStringLiteral("color: red;"));

        gridLayout_2->addWidget(errorTmePath, 1, 1, 1, 1);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        tmeLineEdit = new QLineEdit(tab_2);
        tmeLineEdit->setObjectName(QStringLiteral("tmeLineEdit"));
        sizePolicy1.setHeightForWidth(tmeLineEdit->sizePolicy().hasHeightForWidth());
        tmeLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(tmeLineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        browseTmeButton = new QPushButton(tab_2);
        browseTmeButton->setObjectName(QStringLiteral("browseTmeButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(browseTmeButton->sizePolicy().hasHeightForWidth());
        browseTmeButton->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(browseTmeButton, 0, 2, 1, 1);

        browseRButton = new QPushButton(tab_2);
        browseRButton->setObjectName(QStringLiteral("browseRButton"));

        gridLayout_2->addWidget(browseRButton, 2, 2, 1, 1);

        errorRPath = new QLabel(tab_2);
        errorRPath->setObjectName(QStringLiteral("errorRPath"));
        errorRPath->setStyleSheet(QStringLiteral("color: red;"));

        gridLayout_2->addWidget(errorRPath, 3, 1, 1, 1);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, gridLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        iconWarningRunLabel = new QLabel(tab_2);
        iconWarningRunLabel->setObjectName(QStringLiteral("iconWarningRunLabel"));
        iconWarningRunLabel->setStyleSheet(QStringLiteral("color: rgb(253, 128, 8);"));

        horizontalLayout_2->addWidget(iconWarningRunLabel);

        warningRunLabel = new QLabel(tab_2);
        warningRunLabel->setObjectName(QStringLiteral("warningRunLabel"));
        warningRunLabel->setStyleSheet(QStringLiteral("color: rgb(253, 128, 8);"));

        horizontalLayout_2->addWidget(warningRunLabel);


        formLayout_3->setLayout(2, QFormLayout::FieldRole, horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_3->setItem(1, QFormLayout::FieldRole, verticalSpacer_2);

        tabWidget->addTab(tab_2, QString());

        tabs->addWidget(tabWidget);


        verticalLayout->addLayout(tabs);

        footerPanel = new QWidget(Options);
        footerPanel->setObjectName(QStringLiteral("footerPanel"));
        footerPanel->setStyleSheet(QLatin1String("#footerPanel {\n"
"  background-color: rgb(227, 227, 227);\n"
"}"));
        horizontalLayout_5 = new QHBoxLayout(footerPanel);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(12, 12, 12, 12);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        cancelButton = new QPushButton(footerPanel);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_5->addWidget(cancelButton);

        okButton = new QPushButton(footerPanel);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setAutoDefault(false);

        horizontalLayout_5->addWidget(okButton);


        verticalLayout->addWidget(footerPanel);

        QWidget::setTabOrder(tabWidget, workspaceLineEdit);
        QWidget::setTabOrder(workspaceLineEdit, browseWorkspaceButton);
        QWidget::setTabOrder(browseWorkspaceButton, startupPathCheckBox);
        QWidget::setTabOrder(startupPathCheckBox, languageComboBox);
        QWidget::setTabOrder(languageComboBox, cancelButton);
        QWidget::setTabOrder(cancelButton, okButton);
        QWidget::setTabOrder(okButton, tmeLineEdit);
        QWidget::setTabOrder(tmeLineEdit, browseTmeButton);
        QWidget::setTabOrder(browseTmeButton, rLineEdit);
        QWidget::setTabOrder(rLineEdit, browseRButton);

        retranslateUi(Options);

        tabWidget->setCurrentIndex(0);
        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(Options);
    } // setupUi

    void retranslateUi(QDialog *Options)
    {
        Options->setWindowTitle(QApplication::translate("Options", "Options", nullptr));
        label_3->setText(QApplication::translate("Options", "Change Options", nullptr));
        label_4->setText(QApplication::translate("Options", "Change the options for DengueME application.", nullptr));
        label_5->setText(QApplication::translate("Options", "Language:", nullptr));
        errorWorksapcePath->setText(QApplication::translate("Options", "Error", nullptr));
        startupPathCheckBox->setText(QApplication::translate("Options", "Prompt for workspace on startup", nullptr));
        label->setText(QApplication::translate("Options", "Default Workspace:", nullptr));
        browseWorkspaceButton->setText(QApplication::translate("Options", "Browse", nullptr));
        iconWarning->setText(QApplication::translate("Options", "Icon", nullptr));
        warningMessageLabel->setText(QApplication::translate("Options", "Warning MessageWorkspaceOrLanguage", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Options", "General", nullptr));
        rLineEdit->setPlaceholderText(QApplication::translate("Options", "e.g. \\bin\\x64\\Rgui.exe", nullptr));
        errorTmePath->setText(QApplication::translate("Options", "Error TME", nullptr));
        label_8->setText(QApplication::translate("Options", "R:", nullptr));
        tmeLineEdit->setPlaceholderText(QApplication::translate("Options", "e.g. \\TerraME\\bin\\terrame", nullptr));
        label_2->setText(QApplication::translate("Options", "TerraME:", nullptr));
        browseTmeButton->setText(QApplication::translate("Options", "Browse", nullptr));
        browseRButton->setText(QApplication::translate("Options", "Browse", nullptr));
        errorRPath->setText(QApplication::translate("Options", "Error R", nullptr));
        iconWarningRunLabel->setText(QApplication::translate("Options", "icon", nullptr));
        warningRunLabel->setText(QApplication::translate("Options", "PathChangeWarning", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Options", "Run", nullptr));
        cancelButton->setText(QApplication::translate("Options", "Cancel", nullptr));
        okButton->setText(QApplication::translate("Options", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Options: public Ui_Options {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_H
