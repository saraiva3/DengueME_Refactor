/********************************************************************************
** Form generated from reading UI file 'group.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUP_H
#define UI_GROUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Group
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *useGroup;
    QLineEdit *observerID;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *userLabel;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *addField;
    QSpacerItem *horizontalSpacer;
    QToolButton *removeGroup;
    QListWidget *widgets;

    void setupUi(QWidget *Group)
    {
        if (Group->objectName().isEmpty())
            Group->setObjectName(QStringLiteral("Group"));
        Group->resize(450, 115);
        verticalLayout = new QVBoxLayout(Group);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        useGroup = new QCheckBox(Group);
        useGroup->setObjectName(QStringLiteral("useGroup"));
        useGroup->setEnabled(true);

        horizontalLayout->addWidget(useGroup);

        observerID = new QLineEdit(Group);
        observerID->setObjectName(QStringLiteral("observerID"));
        observerID->setStyleSheet(QStringLiteral("QLineEdit { background-color:transparent; }"));
        observerID->setFrame(false);

        horizontalLayout->addWidget(observerID);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        userLabel = new QLineEdit(Group);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setStyleSheet(QStringLiteral("QLineEdit { background-color:transparent; }"));
        userLabel->setFrame(false);

        horizontalLayout->addWidget(userLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        addField = new QToolButton(Group);
        addField->setObjectName(QStringLiteral("addField"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/plus"), QSize(), QIcon::Normal, QIcon::Off);
        addField->setIcon(icon);
        addField->setIconSize(QSize(15, 15));
        addField->setPopupMode(QToolButton::InstantPopup);
        addField->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        addField->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(addField);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        removeGroup = new QToolButton(Group);
        removeGroup->setObjectName(QStringLiteral("removeGroup"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeGroup->setIcon(icon1);
        removeGroup->setPopupMode(QToolButton::InstantPopup);
        removeGroup->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        removeGroup->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(removeGroup);


        verticalLayout->addLayout(horizontalLayout);

        widgets = new QListWidget(Group);
        widgets->setObjectName(QStringLiteral("widgets"));
        widgets->setDragDropMode(QAbstractItemView::InternalMove);
        widgets->setSelectionMode(QAbstractItemView::ExtendedSelection);
        widgets->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        widgets->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout->addWidget(widgets);


        retranslateUi(Group);

        QMetaObject::connectSlotsByName(Group);
    } // setupUi

    void retranslateUi(QWidget *Group)
    {
        Group->setWindowTitle(QApplication::translate("Group", "Form", nullptr));
        useGroup->setText(QApplication::translate("Group", "Use chart:", nullptr));
        observerID->setText(QApplication::translate("Group", "ID", nullptr));
#ifndef QT_NO_TOOLTIP
        userLabel->setToolTip(QApplication::translate("Group", "Group name", nullptr));
#endif // QT_NO_TOOLTIP
        userLabel->setText(QApplication::translate("Group", "Label", nullptr));
        addField->setText(QApplication::translate("Group", "Add field", nullptr));
        removeGroup->setText(QApplication::translate("Group", "Remove group", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Group: public Ui_Group {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUP_H
