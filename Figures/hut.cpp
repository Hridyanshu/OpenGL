//pattern using huts

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
	
	CreateLine(-0.75,-0.5,0.75,-0.5);
	
	//hut 1
	CreateLine(-0.75,-0.5,-0.75,0.5);
	CreateLine(-0.25,-0.5,-0.25,0.5);
	CreateLine(-0.75,0.5,-0.25,0.5);
	CreateLine(-0.75,0.5,-0.5,0.8);
	CreateLine(-0.25,0.5,-0.5,0.8);
	
	//hut 2
	CreateLine(0.75,-0.5,0.75,0.5);
	CreateLine(0.25,-0.5,0.25,0.5);
	CreateLine(0.75,0.5,0.25,0.5);
	CreateLine(0.75,0.5,0.5,0.8);
	CreateLine(0.25,0.5,0.5,0.8);
	
	//window for hut 1
	CreateLine(-0.45,0.6,-0.45,0.7);
	CreateLine(-0.45,0.7,-0.55,0.7);
	CreateLine(-0.55,0.6,-0.55,0.7);
	CreateLine(-0.45,0.6,-0.55,0.6);
	
	//cross between the huts
	CreateLine(-0.25,0.0,0.25,0.0);
	CreateLine(-0.25,0.0,0.25,-0.5);
	CreateLine(0.25,0.0,-0.25,-0.5);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	
	glutInitDisplayMode(GLUT_RGB);
	
	glutInitWindowPosition(100,200);
	glutInitWindowSize(1500,1500);
	glutCreateWindow("Hut Pattern");
	
	glutDisplayFunc(display);
	
	glutMainLoop();
	
	return 0;
}
