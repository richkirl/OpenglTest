#include "openglconsole.hpp"
#include <QFont>
#include <GL/gl.h>
#include <QDebug>
Openglconsole::Openglconsole()
{
  resize(800,600);
  resizeGL(800,600);
}
Openglconsole::~Openglconsole()
{

}
void Openglconsole::initializeGL()
{

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glOrtho(0,800,600,0,0,1);
}
void Openglconsole::resizeGL(int w, int h)
{
  glViewport(0,0,w,h);

}
void Openglconsole::paintGL()
{
  qglClearColor(Qt::black);

  glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

  glBegin(GL_LINE_LOOP);
  //glVertex2i(0,0);
  glEnd();
  renderText(2.0,18.0,"Hello OpenGL Nice Text Rendering",QFont("arial",10,12,false));
  glPixelStorei(GL_UNPACK_ALIGNMENT, 100);
}
