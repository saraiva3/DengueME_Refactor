/********************************************************************************
** Form generated from reading UI file 'modeleditor.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELEDITOR_H
#define UI_MODELEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModelEditor
{
public:
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton;
    QPushButton *saveButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_5;
    QFrame *line_2;
    QLabel *filenameLabel;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QTextEdit *descriptionBox;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QDialog *ModelEditor)
    {
        if (ModelEditor->objectName().isEmpty())
            ModelEditor->setObjectName(QStringLiteral("ModelEditor"));
        ModelEditor->resize(691, 435);
        horizontalLayout_9 = new QHBoxLayout(ModelEditor);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton = new QPushButton(ModelEditor);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_5->addWidget(pushButton);

        saveButton = new QPushButton(ModelEditor);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout_5->addWidget(saveButton);

        pushButton_2 = new QPushButton(ModelEditor);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_5->addWidget(pushButton_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_5);

        line_2 = new QFrame(ModelEditor);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);


        verticalLayout_4->addLayout(verticalLayout_5);

        filenameLabel = new QLabel(ModelEditor);
        filenameLabel->setObjectName(QStringLiteral("filenameLabel"));

        verticalLayout_4->addWidget(filenameLabel);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));

        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        descriptionBox = new QTextEdit(ModelEditor);
        descriptionBox->setObjectName(QStringLiteral("descriptionBox"));

        verticalLayout_6->addWidget(descriptionBox);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        verticalLayout_6->addLayout(horizontalLayout_8);


        verticalLayout_4->addLayout(verticalLayout_6);


        horizontalLayout_9->addLayout(verticalLayout_4);


        retranslateUi(ModelEditor);

        QMetaObject::connectSlotsByName(ModelEditor);
    } // setupUi

    void retranslateUi(QDialog *ModelEditor)
    {
        ModelEditor->setWindowTitle(QApplication::translate("ModelEditor", "Model Editor", nullptr));
        pushButton->setText(QApplication::translate("ModelEditor", "Load Source", nullptr));
        saveButton->setText(QApplication::translate("ModelEditor", "Save", nullptr));
        pushButton_2->setText(QApplication::translate("ModelEditor", "Run", nullptr));
        filenameLabel->setText(QApplication::translate("ModelEditor", "Filename:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModelEditor: public Ui_ModelEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELEDITOR_H
