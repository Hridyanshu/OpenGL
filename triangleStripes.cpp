//a triangle with stripes inside it

#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);	
	
	glBegin(GL_LINES);
		glVertex2f(-0.5,-0.5);
		glVertex2f(0.5,-0.5);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(-0.5,-0.5);
		glVertex2f(0.0,0.5);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(0.5,-0.5);
		glVertex2f(0.0,0.5);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,-0.5);
		glVertex2f(0.0,0.5);
	glEnd();
		
	glFlush();
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
