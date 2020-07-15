#ifndef QLABLECLOCK_H
#define QLABLECLOCK_H

#include <QWidget>
#include <QLabel>


class QLableClock : public QLabel
{
    Q_OBJECT
public:
    QTimer *timer;

    QLableClock(QWidget *parent);
    int refreshEnable=1;

    void refresh();
    void mousePressEvent(QMouseEvent *ev) override;

};

#endif // QLABLECLOCK_H
