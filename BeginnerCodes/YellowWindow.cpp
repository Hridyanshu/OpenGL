//This code will display a yellow window on the screen

#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

void display()
{
	//clearing the buffer
	glClear(GL_COLOR_BUFFER_BIT);
	
	//resetting the coordinate system (undoing any applied transformations,etc)
	glLoadIdentity();
	
	//displaying the newly created buffer
	glFlush();
}

void init()
{
	//clearing the pixels to yellow colour
	glClearColor(1.0,1.0,0.0,1.0);
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	
	glutInitWindowPosition(200,100);
	glutInitWindowSize(500,500);
	
	glutCreateWindow("Yellow Window");
	
	glutDisplayFunc(display);
	init();
	
	glutMainLoop();
}
