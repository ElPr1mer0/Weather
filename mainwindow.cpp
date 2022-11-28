#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QJsonDocument"
#include "QJsonObject"
#include "QJsonArray"
#include <QStyleOption>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    manager = new QNetworkAccessManager(this);
    connect (manager, &QNetworkAccessManager::finished, this, [&](QNetworkReply *reply){

        if(!reply->error()){

            QJsonDocument doc;
            doc = QJsonDocument::fromJson(reply->readAll());
            QJsonObject root = doc.object(); // превращаем док в объект

            QJsonValue data = root.value("weather"); // поиск по значению пунка weather
            QJsonArray arr = data.toArray(); //работа с массивом
            QString buf  = arr.at(0).toObject().value("description").toString();// первый ряд массива (а он только один здесь) превращаем в объект, в котором
            buf[0] = buf[0].toUpper();  // ищем значение description и выписываем его
            ui->labVWeather->setText(buf);


            data = root.value("main"); //основной раздел
            ui->labTemp->setText(QString::number(floor(data.toObject().value("temp").toDouble())) + " C°");
            ui->labVRealFeel->setText(QString::number(floor(data.toObject().value("feels_like").toDouble()))+ " C°");
            ui->labVHumidity->setText(QString::number(data.toObject().value("humidity").toInt())+ " %");
            ui->labVPressure->setText(QString::number(data.toObject().value("pressure").toInt())+ " Па");

            data = root.value("wind"); // раздел wind
            ui->labVWindPower->setText(QString::number(data.toObject().value("speed").toDouble())+ " м/с");
            ui->labVWind->setText(DATAHANDLER::windDirection(data.toObject().value("deg").toInt()));

            data = root.value("clouds"); // раздел clounds
            ui->labVClounds->setText(QString::number(data.toObject().value("all").toDouble())+" %");

            data = root.value("sys"); // раздел sys
            int unixTime = data.toObject().value("sunrise").toInt(); // берем время подъема солнца в unix и переводим в наше
            ui->labVSunrise->setText(QDateTime::fromSecsSinceEpoch(unixTime,Qt::LocalTime).toString("HH:mm"));
            ui->horizontalSlider->setMinimum((QDateTime::fromSecsSinceEpoch(unixTime,Qt::LocalTime).toString("HH")).toInt()+1);
            unixTime = data.toObject().value("sunset").toInt(); // заход солнца
            ui->labVSunset->setText(QDateTime::fromSecsSinceEpoch(unixTime,Qt::LocalTime).toString("HH:mm"));
            ui->horizontalSlider->setMaximum((QDateTime::fromSecsSinceEpoch(unixTime,Qt::LocalTime).toString("HH")).toInt()+1);
            ui->horizontalSlider->setValue((QTime::currentTime().toString("HH")).toInt());
        }
    });

    on_create();
    set_interfaseStyle();


}





MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    this->style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(event);
}


void MainWindow::on_create(){
   manager->get(QNetworkRequest(QUrl("https://api.openweathermap.org/data/2.5/weather?q=Minsk&appid=b000ab2492f2224690bf4f1fea85b117&units=metric&&lang=ru")));

}

void MainWindow::set_interfaseStyle()
{  

    this->setStyleSheet(style::setMainWidgetStyle());
}

