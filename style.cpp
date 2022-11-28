#include "style.h"



QString style::setLabelStyle()
{
    return "QLabel{"
            "color: rgb(113, 71, 124);"
            "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(137, 85, 74, 255), stop:1 rgba(255, 163, 163, 255));"
            "}";
}

QString style::setMainWidgetStyle()
{
    return  "QMainWindow{"
                "background-image: url(:/images/cloudy.jpg);"
            "}"
            "QLabel{"
                "color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(79, 13, 171, 202), stop:1 rgba(169, 41, 102, 204));"
                //"font: bold;"
            "}"

            ;
}

QString style::setTabStyle()
{
    return "QTabWidget{"
                "border::none;"
            "}"
            "QTabWidget::pane{"
                "border::none;"
            "}";
}
