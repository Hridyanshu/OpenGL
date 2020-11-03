#include<iostream>
#include<GL/glut.h>
#include<GL/gl.h>

using namespace std;

//starting coordinates
int x,y;

//init function
void init()
{
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-10,10,-10,10);
}

//function to make Grid
void Grid()
{
	for(int i=-9;i<10;i++)
	{
		glColor3f(1.0,0.0,0.0);
		glBegin(GL_LINES);
			glVertex2f(i,10);
			glVertex2f(i,-10);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(10,i);
			glVertex2f(-10,i);
		glEnd();
	}	
}
