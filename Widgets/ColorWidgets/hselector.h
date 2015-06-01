#ifndef HUEBAR_H
#define HUEBAR_H

#include <QWidget>
#include <QMouseEvent>

class HSelector : public QWidget
{
  Q_OBJECT
  
public:
  explicit HSelector(QWidget *parent = 0);

  void setH(int h);
  
protected:
  void paintEvent(QPaintEvent*);
  void mousePressEvent(QMouseEvent*);
  void mouseMoveEvent(QMouseEvent*);

  void mouseReleaseEvent(QMouseEvent *e);

  void wheelEvent(QWheelEvent * e);

private:
  void updateColor();
  
  void drawPointer(QPainter &p);
  void movePointer(int y);
  void correctPointer();
  
  void drawBorder(QPainter& p);
  void drawRightTrapezoid(QPainter &p);
  

private:
  bool middlePresed;
  bool hSelectorDrawn;
  QPixmap hSelectorPixmap;
  
  int h,s,v;
  int pointerY;


  void incPointer();
  void decPointer();
signals:
  void hueChanged(QColor);
  void middlePressedSignal(QMouseEvent* e);

public slots:

};

#endif // HUEBAR_H