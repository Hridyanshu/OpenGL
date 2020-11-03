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

//jump function
void Jump(unsigned char key, int a, int b)
{
	glClear(GL_COLOR_BUFFER_BIT);
	if(key=='W' || key=='w')
	{
		x=x+1;
		Grid();
		glBegin(GL_TRIANGLES);
			glColor3f(1.0,1.0,0.0);
			glVertex2f(x, y+0.25);
			glVertex2f(x-0.25, y-0.25);
			glVertex2f(x+0.25, y-0.25);
		glEnd(); 
		glFlush();
	}
	else if(key=='A' || key=='a')
	{
		y=y-1;
		Grid();
		glBegin(GL_TRIANGLES);
			glColor3f(1.0,1.0,0.0);
			glVertex2f(x, y+0.25);
			glVertex2f(x-0.25, y-0.25);
			glVertex2f(x+0.25, y-0.25);
		glEnd();
		glFlush();
	}
	else if(key=='S' || key=='s')
	{
		x=x-1;
		Grid();
		glBegin(GL_TRIANGLES);
			glColor3f(1.0,1.0,0.0);
			glVertex2f(x, y+0.25);
			glVertex2f(x-0.25, y-0.25);
			glVertex2f(x+0.25, y-0.25);
		glEnd();
		glFlush();
	}
	else if(key=='D' || key=='d')
	{	
		y=y+1;
		Grid();
		glBegin(GL_TRIANGLES);
			glColor3f(1.0,1.0,0.0);
			glVertex2f(x, y+0.25);
			glVertex2f(x-0.25, y-0.25);
			glVertex2f(x+0.25, y-0.25);
		glEnd();
		glFlush();
	}
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	Grid();
	
	glBegin(GL_TRIANGLES);
		glColor3f(1.0,1.0,0.0);
		glVertex2f(x, y+0.25);
		glVertex2f(x-0.25, y-0.25);
		glVertex2f(x+0.25, y-0.25);
	glEnd();
	
	glFlush();
}
