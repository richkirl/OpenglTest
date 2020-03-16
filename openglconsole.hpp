#ifndef OPENGLCONSOLE_HPP
#define OPENGLCONSOLE_HPP
#include <QGLWidget>
#include <GL/gl.h>

class Openglconsole : public QGLWidget
{
public:
  Openglconsole();
  ~Openglconsole();
  void initializeGL() override;
  void resizeGL(int w, int h) override;
  void paintGL() override;
};

#endif // OPENGLCONSOLE_HPP
