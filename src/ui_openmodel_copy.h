/********************************************************************************
** Form generated from reading UI file 'openmodel_copy.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENMODEL_COPY_H
#define UI_OPENMODEL_COPY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OpenModel
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QListView *listView;
    QColumnView *columnView;
    QColumnView *columnView_2;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *ok;
    QPushButton *cancel;

    void setupUi(QDialog *OpenModel)
    {
        if (OpenModel->objectName().isEmpty())
            OpenModel->setObjectName(QStringLiteral("OpenModel"));
        OpenModel->setWindowModality(Qt::NonModal);
        OpenModel->resize(532, 402);
        OpenModel->setMinimumSize(QSize(532, 402));
        OpenModel->setMaximumSize(QSize(532, 402));
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        OpenModel->setWindowIcon(icon);
        OpenModel->setModal(true);
        verticalLayout = new QVBoxLayout(OpenModel);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(OpenModel);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        listView = new QListView(OpenModel);
        listView->setObjectName(QStringLiteral("listView"));

        horizontalLayout_2->addWidget(listView);

        columnView = new QColumnView(OpenModel);
        columnView->setObjectName(QStringLiteral("columnView"));

        horizontalLayout_2->addWidget(columnView);

        columnView_2 = new QColumnView(OpenModel);
        columnView_2->setObjectName(QStringLiteral("columnView_2"));

        horizontalLayout_2->addWidget(columnView_2);

        pushButton_3 = new QPushButton(OpenModel);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(OpenModel);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(OpenModel);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        ok = new QPushButton(OpenModel);
        ok->setObjectName(QStringLiteral("ok"));

        horizontalLayout->addWidget(ok);

        cancel = new QPushButton(OpenModel);
        cancel->setObjectName(QStringLiteral("cancel"));

        horizontalLayout->addWidget(cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(OpenModel);

        QMetaObject::connectSlotsByName(OpenModel);
    } // setupUi

    void retranslateUi(QDialog *OpenModel)
    {
        OpenModel->setWindowTitle(QApplication::translate("OpenModel", "Open Model", nullptr));
        label->setText(QApplication::translate("OpenModel", "<html><head/><body><p>Analisador de Resultados</p></body></html>", nullptr));
        pushButton_3->setText(QApplication::translate("OpenModel", "Calibrator", nullptr));
        pushButton_2->setText(QApplication::translate("OpenModel", "Estatistical", nullptr));
        pushButton->setText(QApplication::translate("OpenModel", "Compare", nullptr));
        ok->setText(QApplication::translate("OpenModel", "Load Result", nullptr));
        cancel->setText(QApplication::translate("OpenModel", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenModel: public Ui_OpenModel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENMODEL_COPY_H
