//making a green equilateral triangle with a name inside it

#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<GL/freeglut.h>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.0,1.0,0.0);
		glVertex2f(-0.5,-0.5);
		glVertex2f(0.5,-0.5);
		glVertex2f(0.0,0.366);
	glEnd();

	//setting the position of the text
	glColor3f(0.0,0.0,1.0);
	glRasterPos2f(-0.15,-0.3);
	//displaying the text
	glutBitmapString(GLUT_BITMAP_HELVETICA_18, (unsigned char*)("Hridyanshu"));
	
	glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	
	glutInitWindowPosition(300,200);
	glutInitWindowSize(500,500);
	
	glutCreateWindow("Triangle with name");
	
	glutDisplayFunc(display);
	
	glutMainLoop();
	
	return 0;
}
