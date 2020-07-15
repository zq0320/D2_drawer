#include <QApplication>
#include <QWidget>
#include <QPainter>
#include "qwidgetdraw.h"
#include <QDebug>
#include <QDateTime>
#include <QMouseEvent>
#include <QTimer>
#include "qlableclock.h"


int main(int argc, char * argv[])

{

    QApplication a(argc, argv);
    QWidgetDraw drawWin;
    QLabel *labelTemperatureData = new QLabel(&drawWin);
    // 修改标签内容
    labelTemperatureData->setText("张倩1170500601");
    labelTemperatureData->setGeometry(400,70,300,25);
    labelTemperatureData->setStyleSheet("color:green;font-size: 25px;font-family:Microsoft YaHei");//

    QLableClock *labelClock = new QLableClock(&drawWin);
    labelClock->setGeometry(400,100,325,25);
    labelClock ->setStyleSheet("font-size: 25px;color:green;font-family:Microsoft YaHei");
    drawWin.show();
    return a.exec();

}
