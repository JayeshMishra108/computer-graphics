#include<GL/glut.h>
#include<iostream>
using namespace std;

void myInit(void)
{
	glClearColor(0.6,0.6,0.6,0.0);
	glColor3f(1.0f,1.0f,0.0f);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,840.0,0.0,480.0);
}

void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
		glVertex2i(100,430);
		glVertex2i(100,350);
		glVertex2i(100,350);
		glVertex2i(300,400);	
 	glEnd();
 	glFlush();
 }
 
 int main(int argc, char **argv)
 {
 	glutInit(&argc,argv);
 	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 	glutInitWindowSize(640,480);
 	glutInitWindowPosition(100,150);
 	glutCreateWindow("My first Program");
 	glutDisplayFunc(myDisplay);
 	myInit();
 	glutMainLoop();
 	return 0;
 }		
