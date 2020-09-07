//a triangle with stripes inside it

#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

void CreateLine(float x1, float y1, float x2, float y2)
{
	glBegin(GL_LINES);
		glVertex2f(x1,y1);
		glVertex2f(x2,y2);
	glEnd();
	glFlush();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);	
	
	CreateLine(-0.5,-0.5,0.5,-0.5);
	CreateLine(-0.5,-0.5,0.0,0.5);
	CreateLine(0.5,-0.5,0.0,0.5);
	CreateLine(0.0,-0.5,0.0,0.5);
		
	//stripes horizontal
	CreateLine(0.0,-0.4,-0.45,-0.4);
	CreateLine(0.0,-0.3,-0.4,-0.3);
	CreateLine(0.0,-0.2,-0.35,-0.2);
	CreateLine(0.0,-0.1,-0.3,-0.1);
	CreateLine(0.0,0.0,-0.25,0.0);
	CreateLine(0.0,0.1,-0.2,0.1);
	CreateLine(0.0,0.2,-0.15,0.2);
	CreateLine(0.0,0.3,-0.1,0.3);
	CreateLine(0.0,0.4,-0.05,0.4);
	
	//stripes diagonal
	CreateLine(0.45,-0.5,0.475,-0.45);
	CreateLine(0.4,-0.5,0.45,-0.4);
	CreateLine(0.35,-0.5,0.425,-0.35);
	CreateLine(0.3,-0.5,0.4,-0.3);
	CreateLine(0.25,-0.5,0.375,-0.25);
	CreateLine(0.2,-0.5,0.35,-0.2);
	CreateLine(0.15,-0.5,0.325,-0.15);
	CreateLine(0.1,-0.5,0.3,-0.1);
	CreateLine(0.05,-0.5,0.275,-0.05);
	CreateLine(0.0,-0.5,0.25,0.0);
	CreateLine(0.0,-0.4,0.225,0.05);
	CreateLine(0.0,-0.3,0.2,0.1);
	CreateLine(0.0,-0.2,0.175,0.15);
	CreateLine(0.0,-0.1,0.15,0.2);
	CreateLine(0.0,0.0,0.125,0.25);
	CreateLine(0.0,0.1,0.1,0.3);
	CreateLine(0.0,0.2,0.075,0.35);
	CreateLine(0.0,0.3,0.05,0.4);
	CreateLine(0.0,0.4,0.025,0.45);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	
	glutInitDisplayMode(GLUT_RGB);
	
	glutInitWindowPosition(100,200);
	glutInitWindowSize(1500,1500);
	glutCreateWindow("Triangle with Stripes");
	
	glutDisplayFunc(display);
	
	glutMainLoop();
	
	return 0;
}
