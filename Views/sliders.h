#ifndef SLIDERS_H
#define SLIDERS_H

#include <QMainWindow>
#include <QMouseEvent>


namespace Ui {
class Sliders;
}

class Sliders : public QMainWindow
{
  Q_OBJECT

public:
  explicit Sliders(QWidget *parent = 0);
  ~Sliders();


protected:
  void mouseMoveEvent(QMouseEvent* e);
  void mousePressEvent(QMouseEvent* e);
  void mouseReleaseEvent(QMouseEvent* e);

  void keyPressEvent(QKeyEvent *e);
  void keyReleaseEvent(QKeyEvent *e);
  

private:
  Ui::Sliders *ui;

  bool hueSpinManualEdit;
  bool saturationSpinManualEdit;
  bool valueSpinManualEdit;
  
  bool redSpinManualEdit;
  bool greenSpinManualEdit;
  bool blueSpinManualEdit;
  
  bool cyanSpinManualEdit;
  bool magentaSpinManualEdit;
  bool yellowSpinManualEdit;
  bool blackSpinManualEdit;

  bool mouseDown;
  bool mouseMoved;
  int mx, my;  
  
  void addActions();
  void init();
  
  void updateRedValues(QColor color);
  void updateGreenValues(QColor color);
  void updateBlueValues(QColor color);
  
  void updateCyanValues(QColor color);
  void updateMagentaValues(QColor color);
  void updateYellowValues(QColor color);
  void updateBlackValues(QColor color);

signals:
  void hueChanged(int);
  void hueChanged(QColor);
  
  void saturationChanged(int);
  void saturationChanged(QColor);
  
  void valueChanged(int);
  void valueChanged(QColor);
  
  
  void redChanged(int);
  void redChanged(QColor);
  
  void greenChanged(int);
  void greenChanged(QColor);
  
  void blueChanged(int);
  void blueChanged(QColor);
  

  void cyanChanged(int);
  void cyanChanged(QColor);
  
  void magentaChanged(int);
  void magentaChanged(QColor);
  
  void yellowChanged(int);
  void yellowChanged(QColor);
  
  void blackChanged(int);
  void blackChanged(QColor);
  

  void ctrlPressed();
  void ctrlReleased();
  
public slots:
  void changeHSVFromSelector(QColor color);
  
  void changeHue(int h);
  void changeHue(QColor color);
  void changeHueFromSelector(QColor color);
  
  void changeSaturation(int s);
  void changeSaturation(QColor color);
  void changeSaturationFromSelector(QColor color);  
  
  void changeValue(int s);
  void changeValue(QColor color);
  void changeValueFromSelector(QColor color);  
  
  
  void changeRed(int r);
  void changeRed(QColor color);
  void changeRedFromSelector(QColor color);
  
  void changeGreen(int g);
  void changeGreen(QColor color);
  void changeGreenFromSelector(QColor color);
  
  void changeBlue(int b);
  void changeBlue(QColor color);
  void changeBlueFromSelector(QColor color);
  
  
  void changeCyan(int c);
  void changeCyan(QColor color);
  void changeCyanFromSelector(QColor color);
  
  void changeMagenta(int m);
  void changeMagenta(QColor color);
  void changeMagentaFromSelector(QColor color);
  
  void changeYellow(int y);
  void changeYellow(QColor color);
  void changeYellowFromSelector(QColor color);
  
  void changeBlack(int k);
  void changeBlack(QColor color);
  void changeBlackFromSelector(QColor color);
  
};

#endif // SLIDERS_H
