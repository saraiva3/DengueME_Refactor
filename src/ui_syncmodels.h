/********************************************************************************
** Form generated from reading UI file 'syncmodels.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYNCMODELS_H
#define UI_SYNCMODELS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SyncModels
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QListView *listView;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QPushButton *updateButton;
    QPushButton *downloadButton;
    QPushButton *pushButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *SyncModels)
    {
        if (SyncModels->objectName().isEmpty())
            SyncModels->setObjectName(QStringLiteral("SyncModels"));
        SyncModels->resize(582, 454);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SyncModels->sizePolicy().hasHeightForWidth());
        SyncModels->setSizePolicy(sizePolicy);
        SyncModels->setMinimumSize(QSize(582, 454));
        SyncModels->setMaximumSize(QSize(582, 454));
        horizontalLayout_2 = new QHBoxLayout(SyncModels);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(SyncModels);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        listView = new QListView(SyncModels);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView->setTabKeyNavigation(true);
        listView->setProperty("showDropIndicator", QVariant(false));
        listView->setSelectionMode(QAbstractItemView::ContiguousSelection);
        listView->setViewMode(QListView::ListMode);

        verticalLayout->addWidget(listView);

        progressBar = new QProgressBar(SyncModels);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        updateButton = new QPushButton(SyncModels);
        updateButton->setObjectName(QStringLiteral("updateButton"));

        horizontalLayout->addWidget(updateButton);

        downloadButton = new QPushButton(SyncModels);
        downloadButton->setObjectName(QStringLiteral("downloadButton"));
        downloadButton->setEnabled(false);

        horizontalLayout->addWidget(downloadButton);

        pushButton = new QPushButton(SyncModels);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        cancelButton = new QPushButton(SyncModels);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(SyncModels);
        QObject::connect(cancelButton, SIGNAL(clicked()), SyncModels, SLOT(close()));

        QMetaObject::connectSlotsByName(SyncModels);
    } // setupUi

    void retranslateUi(QDialog *SyncModels)
    {
        SyncModels->setWindowTitle(QApplication::translate("SyncModels", "Update Models Library", nullptr));
        label->setText(QApplication::translate("SyncModels", "Check and download updates in Model Library", nullptr));
        updateButton->setText(QApplication::translate("SyncModels", "Check updates", nullptr));
        downloadButton->setText(QApplication::translate("SyncModels", "Download", nullptr));
        pushButton->setText(QApplication::translate("SyncModels", "Upload", nullptr));
        cancelButton->setText(QApplication::translate("SyncModels", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SyncModels: public Ui_SyncModels {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYNCMODELS_H
