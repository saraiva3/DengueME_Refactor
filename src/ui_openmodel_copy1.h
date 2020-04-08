/********************************************************************************
** Form generated from reading UI file 'openmodel_copy1.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENMODEL_COPY1_H
#define UI_OPENMODEL_COPY1_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OpenModel
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_4;
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

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        pushButton_4 = new QPushButton(OpenModel);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_5->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_5);

        label_2 = new QLabel(OpenModel);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        horizontalLayout_2->addLayout(verticalLayout_2);

        lineEdit = new QLineEdit(OpenModel);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton = new QPushButton(OpenModel);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        label_3 = new QLabel(OpenModel);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit_2 = new QLineEdit(OpenModel);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);

        pushButton_2 = new QPushButton(OpenModel);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_3);

        label_4 = new QLabel(OpenModel);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lineEdit_3 = new QLineEdit(OpenModel);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_4->addWidget(lineEdit_3);

        pushButton_3 = new QPushButton(OpenModel);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_4->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEdit_4 = new QLineEdit(OpenModel);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout->addWidget(lineEdit_4);

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
        label->setText(QApplication::translate("OpenModel", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600;\">Modulo de simula\303\247\303\243o</span></p></body></html>", nullptr));
        pushButton_4->setText(QApplication::translate("OpenModel", "Adicionar Instancia", nullptr));
        label_2->setText(QApplication::translate("OpenModel", "Instancia 1", nullptr));
        lineEdit->setText(QApplication::translate("OpenModel", "Modelo X", nullptr));
        pushButton->setText(QApplication::translate("OpenModel", "Parametrizar", nullptr));
        label_3->setText(QApplication::translate("OpenModel", "Instancia 2", nullptr));
        lineEdit_2->setText(QApplication::translate("OpenModel", "Modelo X", nullptr));
        pushButton_2->setText(QApplication::translate("OpenModel", "Parametrizar", nullptr));
        label_4->setText(QApplication::translate("OpenModel", "Instancia 3", nullptr));
        lineEdit_3->setText(QApplication::translate("OpenModel", "Modelo X - Vers\303\243o 2", nullptr));
        pushButton_3->setText(QApplication::translate("OpenModel", "Parametrizar", nullptr));
        lineEdit_4->setText(QApplication::translate("OpenModel", "Tempo de simula\303\247\303\243o", nullptr));
        ok->setText(QApplication::translate("OpenModel", "Simular", nullptr));
        cancel->setText(QApplication::translate("OpenModel", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenModel: public Ui_OpenModel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENMODEL_COPY1_H
