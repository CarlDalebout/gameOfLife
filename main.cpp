#include <iostream>
#include <GL/freeglut.h>
#include "../ciss380/a/mygllib/gl2d.h"

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    glutSwapBuffers();
}

int main(int argc, char ** argv)
{
  glutInit(&argc, argv);
  std::cout << "hello world!!! I hope this works" << std::endl;
  glutInitWindowPosition(300, 100);
  glutInitWindowSize(400, 400);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
  glutCreateWindow("OpenGL!!!");
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}