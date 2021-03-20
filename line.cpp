#include<GL/glut.h>
#include<iostream>
using namespace std;

void myInit(void)
{
	glClearColor(0.6,0.6,0.6,0.0);
	glColor3f(1.0f,0.0f,0.0f);
	glLineWidth(10.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,640.0,0.0,480.0);
}

void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
		glVertex2i(100,430);
		glVertex2i(300,430);
		glVertex2i(430,100);
		glVertex2i(430,300);	
 	glEnd();
 	glFlush();
 }
 
 int main(int argc, char **argv)
 {
 	glutInit(&argc,argv);
 	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 	glutInitWindowSize(640,480);
 	glutInitWindowPosition(100,150);
 	glutCreateWindow("My first Program to draw two straight lines");
 	glutDisplayFunc(myDisplay);
 	myInit();
 	glutMainLoop();
 	return 0;
 }		
