// moving car

#include<GL/glut.h>
#include<math.h>
#include<unistd.h>
#define pi 3.142857

void init()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	gluOrtho2D(-100, 100, -100, 100);
}


void car(int z) //z is the no of time the function is called
{
	float x,y;
	glBegin(GL_POINTS);
		for(float i=0;i<(2*pi);i=i+0.001)
		{
			x = 5 * cos(i);
			y = 5 * sin(i);
			glVertex2f(x-50+25*(z-1),y);
		}
		for(float i=0;i<(2*pi);i=i+0.001)
		{
			x = 5 * cos(i);
			y = 5 * sin(i);
			glVertex2f(x-25+25*(z-1),y);
		}
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(-50+25*(z-1),5);
		glVertex2f(-50+25*(z-1),10);
		glVertex2f(-50+25*(z-1),5);
		glVertex2f(-25+25*(z-1),5);
		glVertex2f(-25+25*(z-1),5);
		glVertex2f(-25+25*(z-1),10);
		glVertex2f(-50+25*(z-1),10);
		glVertex2f(-25+25*(z-1),10);
	glEnd();
}
