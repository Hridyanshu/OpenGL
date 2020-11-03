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
