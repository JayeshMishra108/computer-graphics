#include<GL/glut.h>
#include<iostream>
using namespace std;

void myInit(void)
{
	glClearColor(0.6,0.6,0.6,0.0);
	glColor3f(1.0f,0.0f,1.0f);
	glLineWidth(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,200.0,0.0,200.0);
}

void hardwiredHouse(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
		glVertex2i(40,40);                                // shell of the house 
		glVertex2i(40,90);
		glVertex2i(70,120);
		glVertex2i(100,90);
		glVertex2i(100,40);
			
 	glEnd();
 	glBegin(GL_LINE_STRIP);
		glVertex2i(50,100);
		glVertex2i(50,120);
		glVertex2i(60,120);                           //chimney of the house 
		glVertex2i(60,110);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2i(50,40);                                // door of the house 
		glVertex2i(50,70);
		glVertex2i(70,70);
		glVertex2i(70,40);
		glVertex2i(50,40);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2i(80,80);                                // window of the house 
		glVertex2i(80,90);
		glVertex2i(90,90);
		glVertex2i(90,80);
		glVertex2i(80,80);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2i(20,20);                                // border 
		glVertex2i(20,180);
		glVertex2i(180,180);
		glVertex2i(180,20);
		glVertex2i(20,20);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex2i(25,130);                                // mountains  
		glVertex2i(70,175);
		glVertex2i(100,130);
		glVertex2i(130,175);
		glVertex2i(175,130);
	glEnd();		
 	glFlush();
 }
 
 int main(int argc, char **argv)
 {
 	glutInit(&argc,argv);
 	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 	glutInitWindowSize(640,480);
 	glutInitWindowPosition(100,150);
 	glutCreateWindow("House");
 	glutDisplayFunc(hardwiredHouse);
 	myInit();
 	glutMainLoop();
 	return 0;
 }		
