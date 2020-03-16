#include "mainwindow.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  Openglconsole myconsole;

  myconsole.show();
  myconsole.setWindowOpacity(0.9);
  return a.exec();
}
