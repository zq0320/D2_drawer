#include "qlableclock.h"
#include <QDateTime>
#include <QTimer>
#include <QLabel>
#include <QMouseEvent>
#include <QLCDNumber>
#include <QVBoxLayout>
#include <QTime>
QLableClock::QLableClock(QWidget *parent) : QLabel(parent)

    {
        this->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss zzz"));
        timer = new QTimer(parent);
        connect(timer ,&QTimer::timeout,this,&QLableClock::refresh);
        timer->start(1);//1ms


    }
    void QLableClock::refresh()
    {
        if(1 == refreshEnable)
        this->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss zzz"));
    }

    void QLableClock::mousePressEvent(QMouseEvent *ev)
    {
        if (ev->button() == Qt::LeftButton)
        {
            if(1 == refreshEnable)
                refreshEnable = 0;
            else
                refreshEnable = 1;
        }
    }


