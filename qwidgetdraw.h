#ifndef QWIDGETDRAW_H
#define QWIDGETDRAW_H
#include <QWidget>

class QWidgetDraw : public QWidget

{
    Q_OBJECT
public:
    explicit QWidgetDraw(QWidget *parent = nullptr);
    void draw(QPainter *painter);
    void drawDivide(QPainter *painter, int startX, int startY, int width, int hight, int wCnt, int hCnt);
private:
    void paintEvent(QPaintEvent *event) override;
signals:

};


#endif // QWIDGETDRAW_H
