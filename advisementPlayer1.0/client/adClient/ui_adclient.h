/********************************************************************************
** Form generated from reading UI file 'adclient.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADCLIENT_H
#define UI_ADCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdClient
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *video_lb;
    QVBoxLayout *verticalLayout;
    QLabel *date_lb;
    QLabel *weather_lb;
    QLabel *msg_lb;

    void setupUi(QMainWindow *AdClient)
    {
        if (AdClient->objectName().isEmpty())
            AdClient->setObjectName(QStringLiteral("AdClient"));
        AdClient->resize(800, 480);
        AdClient->setMinimumSize(QSize(800, 480));
        AdClient->setMaximumSize(QSize(800, 480));
        centralWidget = new QWidget(AdClient);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        video_lb = new QLabel(centralWidget);
        video_lb->setObjectName(QStringLiteral("video_lb"));
        video_lb->setMinimumSize(QSize(610, 0));
        QFont font;
        font.setPointSize(16);
        video_lb->setFont(font);
        video_lb->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        video_lb->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(video_lb);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        date_lb = new QLabel(centralWidget);
        date_lb->setObjectName(QStringLiteral("date_lb"));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        date_lb->setFont(font1);
        date_lb->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 127);"));
        date_lb->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(date_lb);

        weather_lb = new QLabel(centralWidget);
        weather_lb->setObjectName(QStringLiteral("weather_lb"));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        weather_lb->setFont(font2);
        weather_lb->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        weather_lb->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(weather_lb);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        msg_lb = new QLabel(centralWidget);
        msg_lb->setObjectName(QStringLiteral("msg_lb"));
        msg_lb->setMaximumSize(QSize(16777215, 80));
        msg_lb->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 0);"));

        verticalLayout_2->addWidget(msg_lb);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        AdClient->setCentralWidget(centralWidget);

        retranslateUi(AdClient);

        QMetaObject::connectSlotsByName(AdClient);
    } // setupUi

    void retranslateUi(QMainWindow *AdClient)
    {
        AdClient->setWindowTitle(QApplication::translate("AdClient", "AdClient", 0));
        video_lb->setText(QString());
        date_lb->setText(QApplication::translate("AdClient", "15-10-21\n"
"19:14:10", 0));
        weather_lb->setText(QApplication::translate("AdClient", "\345\271\277\345\267\236\n"
" 25 \345\276\256\351\243\216   \346\231\264    ", 0));
        msg_lb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdClient: public Ui_AdClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADCLIENT_H
