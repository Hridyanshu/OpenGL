#include<stdio.h> 
#include<GL/glut.h> 
#include<math.h> 
#define pi 3.142857 

void myInit (void) 
{
	glMatrixMode(GL_PROJECTION); 
	gluOrtho2D(-100, 100, -100, 100); 
} 

void display (void) 
{ 
	float x, y, i;
	glClear(GL_COLOR_BUFFER_BIT); 
	
	//face
	glBegin(GL_POINTS);  	
	for ( i = 0; i < (2 * pi); i += 0.001) 
	{
		x = 50 * cos(i); 
		y = 50 * sin(i); 	
		glVertex2i(x, y); 
	}
	glEnd();
	
	//eye 1
	glBegin(GL_POINTS); 	
	for ( i = 0; i < (2 * pi); i += 0.001) 
	{ 
		x = 5 * cos(i); 
		y = 5 * sin(i);	
		glVertex2i(x-25, y+30); 
	} 
	glEnd(); 
	
	//eye2
	glBegin(GL_POINTS); 	
	for ( i = 0; i < (2 * pi); i += 0.001) 
	{
		x = 5 * cos(i); 
		y = 5 * sin(i);	
		glVertex2i(x+25, y+30); 
	} 
	glEnd(); 
	
	//smile
	glBegin(GL_POINTS);
	for ( i = pi; i <(2*pi); i += 0.001) 
	{
		x = 40 * cos(i); 
		y = 40 * sin(i);
		glVertex2i(x, y);
	}
	glEnd(); 
	glFlush(); 
} 

int main (int argc, char** argv) 
{ 
	glutInit(&argc, argv); 
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 	
	glutInitWindowSize(500, 500); 
	glutInitWindowPosition(0, 0); 
	glutCreateWindow("Smiley"); 
	myInit(); 
	glutDisplayFunc(display); 
	glutMainLoop(); 
}
