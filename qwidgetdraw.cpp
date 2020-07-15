#include "qwidgetdraw.h"
#include <QPaintEvent>
#include <QPainter>
#include <QtMath>


QWidgetDraw::QWidgetDraw(QWidget *parent) : QWidget(parent)

{
    this->setWindowTitle("搞一个大项目");
    this->resize(660+100, 440+100);

}


void QWidgetDraw::paintEvent(QPaintEvent *event)

{

    QPainter *painter = new QPainter();
    painter->begin(this);
    this->draw(painter);
    painter->end();

}


void QWidgetDraw::draw(QPainter *painter)

{

    int step;
   // 配置画笔参数
    painter->setPen(QPen(Qt::black, Qt::DashLine));
    // 画国旗外框
    painter->drawRect(50, 50, 660, 440);
    // 水平垂直2等分
    this->drawDivide(painter, 50, 50, 660, 440, 2, 2);
    // 左上角10x15等分
    this->drawDivide(painter, 50, 50, 660/2, 440/2, 15, 10);
    // 绘制大圆

    step = 330/15;
    painter->drawEllipse(50 + step*2, 50 + step*2, step*6, step*6);
    painter->drawEllipse(50 + step*9, 50 + step*1, step*2, step*2);
    painter->drawEllipse(50 + step*11, 50 + step*3, step*2, step*2);
    painter->drawEllipse(50 + step*11, 50 + step*6, step*2, step*2);
    painter->drawEllipse(50 + step*9, 50 + step*8, step*2, step*2);

    // todo

    // 必须完成其他4个小圆

    // 拓展：画大的五角星

}


void QWidgetDraw::drawDivide(QPainter *painter, int startX, int startY, int width, int hight, int wCnt, int hCnt)

{
    int step = width/wCnt;
    int cnt = 0;
    // 水平方向等分
    for(cnt = 0; cnt < wCnt; cnt++)
        painter->drawLine(startX+step*cnt, startY, startX+step*cnt, startY+hight);
    // 垂直方向等分
    step = hight/hCnt;
    for(cnt = 0; cnt < hCnt; cnt++)
        painter->drawLine(startX, startY+step*cnt, startX+width, startY+step*cnt);

}


