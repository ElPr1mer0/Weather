/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *labTemp;
    QLabel *labRealFeel;
    QLabel *labVRealFeel;
    QLabel *labVWeather;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *labVClounds;
    QLabel *labVPressure;
    QLabel *labWindPower;
    QLabel *labPressure;
    QLabel *labVWindPower;
    QLabel *labVHumidity;
    QLabel *labVSunset;
    QLabel *labSunRiseSet;
    QLabel *labWind;
    QLabel *labVWind;
    QLabel *labVSunrise;
    QLabel *labHumidity;
    QLabel *labClounds;
    QSlider *horizontalSlider;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 500);
        MainWindow->setMinimumSize(QSize(800, 500));
        MainWindow->setMaximumSize(QSize(800, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/cloudy.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(40, 10, 261, 131));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        labTemp = new QLabel(gridLayoutWidget_2);
        labTemp->setObjectName(QString::fromUtf8("labTemp"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labTemp->sizePolicy().hasHeightForWidth());
        labTemp->setSizePolicy(sizePolicy);
        labTemp->setMinimumSize(QSize(80, 80));
        labTemp->setMaximumSize(QSize(80, 80));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift Condensed")});
        font.setPointSize(36);
        font.setBold(false);
        labTemp->setFont(font);
        labTemp->setStyleSheet(QString::fromUtf8(""));
        labTemp->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labTemp, 1, 0, 1, 1);

        labRealFeel = new QLabel(gridLayoutWidget_2);
        labRealFeel->setObjectName(QString::fromUtf8("labRealFeel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labRealFeel->sizePolicy().hasHeightForWidth());
        labRealFeel->setSizePolicy(sizePolicy1);
        labRealFeel->setMinimumSize(QSize(120, 20));
        labRealFeel->setMaximumSize(QSize(120, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift Condensed")});
        font1.setPointSize(15);
        font1.setBold(false);
        labRealFeel->setFont(font1);
        labRealFeel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labRealFeel, 1, 1, 1, 1);

        labVRealFeel = new QLabel(gridLayoutWidget_2);
        labVRealFeel->setObjectName(QString::fromUtf8("labVRealFeel"));
        sizePolicy1.setHeightForWidth(labVRealFeel->sizePolicy().hasHeightForWidth());
        labVRealFeel->setSizePolicy(sizePolicy1);
        labVRealFeel->setMinimumSize(QSize(40, 40));
        labVRealFeel->setMaximumSize(QSize(40, 40));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift Condensed")});
        font2.setPointSize(15);
        labVRealFeel->setFont(font2);

        gridLayout_2->addWidget(labVRealFeel, 1, 2, 1, 1);

        labVWeather = new QLabel(gridLayoutWidget_2);
        labVWeather->setObjectName(QString::fromUtf8("labVWeather"));
        sizePolicy1.setHeightForWidth(labVWeather->sizePolicy().hasHeightForWidth());
        labVWeather->setSizePolicy(sizePolicy1);
        labVWeather->setMinimumSize(QSize(200, 40));
        labVWeather->setMaximumSize(QSize(400, 40));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bahnschrift Condensed")});
        font3.setPointSize(22);
        font3.setBold(false);
        labVWeather->setFont(font3);
        labVWeather->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(labVWeather, 0, 0, 1, 3);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 170, 741, 241));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labVClounds = new QLabel(gridLayoutWidget);
        labVClounds->setObjectName(QString::fromUtf8("labVClounds"));
        labVClounds->setMinimumSize(QSize(0, 20));
        labVClounds->setMaximumSize(QSize(16777215, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Bahnschrift Condensed")});
        font4.setPointSize(14);
        font4.setBold(false);
        labVClounds->setFont(font4);
        labVClounds->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labVClounds, 3, 1, 1, 2);

        labVPressure = new QLabel(gridLayoutWidget);
        labVPressure->setObjectName(QString::fromUtf8("labVPressure"));
        labVPressure->setMinimumSize(QSize(0, 20));
        labVPressure->setMaximumSize(QSize(16777215, 20));
        labVPressure->setFont(font4);
        labVPressure->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labVPressure, 2, 1, 1, 2);

        labWindPower = new QLabel(gridLayoutWidget);
        labWindPower->setObjectName(QString::fromUtf8("labWindPower"));
        labWindPower->setEnabled(true);
        labWindPower->setMinimumSize(QSize(0, 20));
        labWindPower->setMaximumSize(QSize(16777215, 20));
        labWindPower->setFont(font4);
        labWindPower->setTextFormat(Qt::AutoText);
        labWindPower->setScaledContents(false);
        labWindPower->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labWindPower, 0, 0, 1, 1);

        labPressure = new QLabel(gridLayoutWidget);
        labPressure->setObjectName(QString::fromUtf8("labPressure"));
        labPressure->setMinimumSize(QSize(0, 20));
        labPressure->setMaximumSize(QSize(16777215, 20));
        labPressure->setFont(font4);

        gridLayout->addWidget(labPressure, 2, 0, 1, 1);

        labVWindPower = new QLabel(gridLayoutWidget);
        labVWindPower->setObjectName(QString::fromUtf8("labVWindPower"));
        labVWindPower->setMinimumSize(QSize(0, 20));
        labVWindPower->setMaximumSize(QSize(16777215, 20));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Bahnschrift Condensed")});
        font5.setPointSize(14);
        labVWindPower->setFont(font5);
        labVWindPower->setLayoutDirection(Qt::LeftToRight);
        labVWindPower->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labVWindPower, 0, 1, 1, 2);

        labVHumidity = new QLabel(gridLayoutWidget);
        labVHumidity->setObjectName(QString::fromUtf8("labVHumidity"));
        labVHumidity->setFont(font4);
        labVHumidity->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labVHumidity, 1, 1, 1, 2);

        labVSunset = new QLabel(gridLayoutWidget);
        labVSunset->setObjectName(QString::fromUtf8("labVSunset"));
        labVSunset->setMinimumSize(QSize(0, 20));
        labVSunset->setMaximumSize(QSize(16777215, 20));
        labVSunset->setFont(font4);

        gridLayout->addWidget(labVSunset, 3, 5, 1, 1);

        labSunRiseSet = new QLabel(gridLayoutWidget);
        labSunRiseSet->setObjectName(QString::fromUtf8("labSunRiseSet"));
        labSunRiseSet->setMinimumSize(QSize(0, 20));
        labSunRiseSet->setMaximumSize(QSize(16777215, 20));
        labSunRiseSet->setFont(font4);

        gridLayout->addWidget(labSunRiseSet, 3, 3, 1, 1);

        labWind = new QLabel(gridLayoutWidget);
        labWind->setObjectName(QString::fromUtf8("labWind"));
        labWind->setMinimumSize(QSize(0, 20));
        labWind->setMaximumSize(QSize(16777215, 20));
        labWind->setFont(font4);
        labWind->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labWind, 0, 3, 1, 1);

        labVWind = new QLabel(gridLayoutWidget);
        labVWind->setObjectName(QString::fromUtf8("labVWind"));
        labVWind->setMinimumSize(QSize(0, 20));
        labVWind->setMaximumSize(QSize(16777215, 20));
        labVWind->setFont(font5);
        labVWind->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labVWind, 0, 4, 1, 2);

        labVSunrise = new QLabel(gridLayoutWidget);
        labVSunrise->setObjectName(QString::fromUtf8("labVSunrise"));
        labVSunrise->setMinimumSize(QSize(0, 20));
        labVSunrise->setMaximumSize(QSize(16777215, 20));
        labVSunrise->setFont(font4);

        gridLayout->addWidget(labVSunrise, 3, 4, 1, 1);

        labHumidity = new QLabel(gridLayoutWidget);
        labHumidity->setObjectName(QString::fromUtf8("labHumidity"));
        labHumidity->setMinimumSize(QSize(0, 20));
        labHumidity->setMaximumSize(QSize(16777215, 20));
        labHumidity->setFont(font4);

        gridLayout->addWidget(labHumidity, 1, 0, 1, 1);

        labClounds = new QLabel(gridLayoutWidget);
        labClounds->setObjectName(QString::fromUtf8("labClounds"));
        labClounds->setMinimumSize(QSize(0, 20));
        labClounds->setMaximumSize(QSize(16777215, 20));
        labClounds->setFont(font4);

        gridLayout->addWidget(labClounds, 3, 0, 1, 1);

        horizontalSlider = new QSlider(gridLayoutWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setEnabled(false);
        horizontalSlider->setFocusPolicy(Qt::NoFocus);
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"border: 1px solid #999999;\n"
"height: 8px; /* \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\261\320\276\321\200\320\276\320\267\320\264\320\272\320\260 \321\200\320\260\321\201\321\210\320\270\321\200\321\217\320\265\321\202\321\201\321\217 \320\264\320\276 \321\200\320\260\320\267\320\274\320\265\321\200\320\276\320\262 \320\277\320\276\320\273\320\267\321\203\320\275\320\272\320\260. \320\267\320\260\320\264\320\260\320\262 \320\262\321\213\321\201\320\276\321\202\321\203 \320\276\320\275\320\260 \320\277\321\200\320\270\320\275\320\270\320\274\320\260\320\265\321\202 \321\204\320\270\320\272\321\201\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 */\n"
"\n"
"\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(0, 0, 74, 255), stop:0.0227273 rgba(230, 145, 53, 255), stop:0.113636 rgba(239, 208, 55, 255), stop:0.863636 rg"
                        "ba(239, 235, 27, 255), stop:0.948864 rgba(239, 156, 32, 253), stop:1 rgba(0, 0, 95, 255));\n"
"margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"background:rgb(255, 170, 0);\n"
"border: 1px solid #5c5c5c;\n"
"width: 18px;\n"
"margin: -2px 0; /* \321\200\321\203\320\272\320\276\321\217\321\202\320\272\320\260 \321\200\320\260\321\201\320\277\320\276\320\273\320\260\320\263\320\260\320\265\321\202\321\201\321\217 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262 \320\277\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272\320\265 \321\201\320\276\320\264\320\265\321\200\320\266\320\270\320\274\320\276\320\263\320\276 \320\261\320\276\321\200\320\276\320\267\320\264\320\272\320\270. \320\240\320\260\321\201\321\210\320\270\321\200\321\217\320\265\321\202\321\201\321\217 \320\275\320\260\321\200\321\203\320\266\321\203 \320\276\321\202 \320\261\320\276\321\200\320\276\320\267\320\264\320\272\320\270 */\n"
"bor"
                        "der-radius: 3px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        horizontalSlider->setValue(20);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(horizontalSlider, 2, 3, 1, 3);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(630, 30, 75, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\263\320\276\320\264\320\260", nullptr));
        labTemp->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277", nullptr));
        labRealFeel->setText(QCoreApplication::translate("MainWindow", "\320\236\321\211\321\203\321\211\320\260\320\265\321\202\321\201\321\217 \320\272\320\260\320\272 ", nullptr));
        labVRealFeel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labVWeather->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201 \320\277\320\276\320\263\320\276\320\264\321\213", nullptr));
        labVClounds->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labVPressure->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labWindPower->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\200\321\213\320\262 \320\262\320\265\321\202\321\200\320\260", nullptr));
        labPressure->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        labVWindPower->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labVHumidity->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labVSunset->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labSunRiseSet->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\320\262\320\265\321\202/\320\267\320\260\320\272\320\260\321\202", nullptr));
        labWind->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\262\320\265\321\202\321\200\320\260", nullptr));
        labVWind->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labVSunrise->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labHumidity->setText(QCoreApplication::translate("MainWindow", "\320\222\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        labClounds->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\273\320\260\321\207\320\275\320\276\321\201\321\202\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
