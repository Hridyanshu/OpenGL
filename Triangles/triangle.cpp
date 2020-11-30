//making an equilateral triangle of green color

#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

void display()
{
	//clearing the buffer
	glClear(GL_COLOR_BUFFER_BIT);
	
	//making the triangle
	glBegin(GL_TRIANGLES);
		glColor3f(0.0,1.0,0.0);
		glVertex2f(-0.25,0);
		glVertex2f(0.25,0);
		glVertex2f(0,0.433);
	glEnd();
	
	//displaying the buffer
	glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	
	glutInitWindowPosition(300,100);
	glutInitWindowSize(500,500);
	
	glutCreateWindow("GREEN EQUILATERAL TRIANGLE");
	
	glutDisplayFunc(display);
	
	glutMainLoop();
}
