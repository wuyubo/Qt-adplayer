/********************************************************************************
** Form generated from reading UI file 'adsever.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADSEVER_H
#define UI_ADSEVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdSever
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QListWidget *client_lw;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *add_ad_bt_2;
    QPushButton *delete_ad_bt_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *weather_lb;
    QGridLayout *gridLayout;
    QComboBox *city_cb;
    QComboBox *distict_cb;
    QPushButton *set_city_bt;
    QVBoxLayout *verticalLayout_3;
    QLabel *vdoname_lb;
    QLabel *video_lb;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QListWidget *msg_lw;
    QVBoxLayout *verticalLayout_4;
    QLabel *date_lb;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *msg_te;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *clear_msg_bt;
    QSpacerItem *horizontalSpacer;
    QPushButton *broast_msg_bt;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *ad_lw;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *add_ad_bt;
    QPushButton *delete_ad_bt;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *AdSever)
    {
        if (AdSever->objectName().isEmpty())
            AdSever->setObjectName(QStringLiteral("AdSever"));
        AdSever->resize(795, 503);
        centralWidget = new QWidget(AdSever);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        client_lw = new QListWidget(centralWidget);
        client_lw->setObjectName(QStringLiteral("client_lw"));

        gridLayout_3->addWidget(client_lw, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        add_ad_bt_2 = new QPushButton(centralWidget);
        add_ad_bt_2->setObjectName(QStringLiteral("add_ad_bt_2"));

        horizontalLayout_6->addWidget(add_ad_bt_2);

        delete_ad_bt_2 = new QPushButton(centralWidget);
        delete_ad_bt_2->setObjectName(QStringLiteral("delete_ad_bt_2"));

        horizontalLayout_6->addWidget(delete_ad_bt_2);


        gridLayout_3->addLayout(horizontalLayout_6, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        weather_lb = new QLabel(centralWidget);
        weather_lb->setObjectName(QStringLiteral("weather_lb"));
        weather_lb->setMinimumSize(QSize(160, 170));
        weather_lb->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));

        horizontalLayout->addWidget(weather_lb);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        city_cb = new QComboBox(centralWidget);
        city_cb->setObjectName(QStringLiteral("city_cb"));
        city_cb->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(city_cb, 0, 0, 1, 1);

        distict_cb = new QComboBox(centralWidget);
        distict_cb->setObjectName(QStringLiteral("distict_cb"));
        distict_cb->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(distict_cb, 1, 0, 1, 1);

        set_city_bt = new QPushButton(centralWidget);
        set_city_bt->setObjectName(QStringLiteral("set_city_bt"));
        set_city_bt->setMinimumSize(QSize(6, 0));
        set_city_bt->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(set_city_bt, 2, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        horizontalLayout_4->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        vdoname_lb = new QLabel(centralWidget);
        vdoname_lb->setObjectName(QStringLiteral("vdoname_lb"));
        vdoname_lb->setMaximumSize(QSize(16777215, 20));
        vdoname_lb->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        verticalLayout_3->addWidget(vdoname_lb);

        video_lb = new QLabel(centralWidget);
        video_lb->setObjectName(QStringLiteral("video_lb"));
        video_lb->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));

        verticalLayout_3->addWidget(video_lb);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        msg_lw = new QListWidget(centralWidget);
        msg_lw->setObjectName(QStringLiteral("msg_lw"));
        msg_lw->setMinimumSize(QSize(230, 0));

        horizontalLayout_5->addWidget(msg_lw);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        date_lb = new QLabel(centralWidget);
        date_lb->setObjectName(QStringLiteral("date_lb"));
        date_lb->setMinimumSize(QSize(0, 100));
        date_lb->setMaximumSize(QSize(16777215, 16777215));
        date_lb->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));

        verticalLayout_4->addWidget(date_lb);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        msg_te = new QTextEdit(centralWidget);
        msg_te->setObjectName(QStringLiteral("msg_te"));

        verticalLayout_2->addWidget(msg_te);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        clear_msg_bt = new QPushButton(centralWidget);
        clear_msg_bt->setObjectName(QStringLiteral("clear_msg_bt"));

        horizontalLayout_3->addWidget(clear_msg_bt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        broast_msg_bt = new QPushButton(centralWidget);
        broast_msg_bt->setObjectName(QStringLiteral("broast_msg_bt"));

        horizontalLayout_3->addWidget(broast_msg_bt);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_5);


        gridLayout_2->addLayout(verticalLayout_5, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        ad_lw = new QListWidget(centralWidget);
        ad_lw->setObjectName(QStringLiteral("ad_lw"));

        verticalLayout->addWidget(ad_lw);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        add_ad_bt = new QPushButton(centralWidget);
        add_ad_bt->setObjectName(QStringLiteral("add_ad_bt"));

        horizontalLayout_2->addWidget(add_ad_bt);

        delete_ad_bt = new QPushButton(centralWidget);
        delete_ad_bt->setObjectName(QStringLiteral("delete_ad_bt"));

        horizontalLayout_2->addWidget(delete_ad_bt);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);

        AdSever->setCentralWidget(centralWidget);
        client_lw->raise();
        ad_lw->raise();
        date_lb->raise();
        weather_lb->raise();
        city_cb->raise();
        distict_cb->raise();
        set_city_bt->raise();
        video_lb->raise();
        vdoname_lb->raise();
        msg_te->raise();
        clear_msg_bt->raise();
        broast_msg_bt->raise();
        delete_ad_bt->raise();
        add_ad_bt->raise();
        msg_lw->raise();
        delete_ad_bt->raise();
        add_ad_bt->raise();
        add_ad_bt_2->raise();
        delete_ad_bt_2->raise();
        label_2->raise();
        menuBar = new QMenuBar(AdSever);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 795, 23));
        AdSever->setMenuBar(menuBar);

        retranslateUi(AdSever);

        QMetaObject::connectSlotsByName(AdSever);
    } // setupUi

    void retranslateUi(QMainWindow *AdSever)
    {
        AdSever->setWindowTitle(QApplication::translate("AdSever", "AdSever", 0));
        label_2->setText(QApplication::translate("AdSever", "\345\256\242\346\210\267\347\253\257\345\210\227\350\241\250\357\274\210\344\270\213\344\275\215\346\234\272\357\274\211", 0));
        add_ad_bt_2->setText(QApplication::translate("AdSever", "\345\224\244\351\206\222", 0));
        delete_ad_bt_2->setText(QApplication::translate("AdSever", "\347\235\241\347\234\240", 0));
        weather_lb->setText(QApplication::translate("AdSever", "TextLabel", 0));
        set_city_bt->setText(QApplication::translate("AdSever", "\350\256\276\345\256\232\345\234\260\345\214\272", 0));
        vdoname_lb->setText(QApplication::translate("AdSever", "TextLabel", 0));
        video_lb->setText(QApplication::translate("AdSever", "TextLabel", 0));
        date_lb->setText(QApplication::translate("AdSever", "TextLabel", 0));
        clear_msg_bt->setText(QApplication::translate("AdSever", "\346\270\205\347\251\272", 0));
        broast_msg_bt->setText(QApplication::translate("AdSever", "\345\271\277\346\222\255", 0));
        label->setText(QApplication::translate("AdSever", "\345\271\277\345\221\212\345\210\227\350\241\250", 0));
        add_ad_bt->setText(QApplication::translate("AdSever", "\346\267\273\345\212\240\345\271\277\345\221\212", 0));
        delete_ad_bt->setText(QApplication::translate("AdSever", "\345\210\240\351\231\244\345\271\277\345\221\212", 0));
    } // retranslateUi

};

namespace Ui {
    class AdSever: public Ui_AdSever {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADSEVER_H
