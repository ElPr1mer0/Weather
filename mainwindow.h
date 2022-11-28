#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QPainter>


#include <datahandler.h>
#include <style.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QNetworkAccessManager *manager;
protected:
    void paintEvent(QPaintEvent *event);
private:
    void on_create();
    void set_interfaseStyle();
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
