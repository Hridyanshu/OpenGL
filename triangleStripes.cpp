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
		
	//stripes horizontal
	glBegin(GL_LINES);
		glVertex2f(0.0,-0.4);
		glVertex2f(-0.45,-0.4);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,-0.3);
		glVertex2f(-0.4,-0.3);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,-0.2);
		glVertex2f(-0.35,-0.2);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,-0.1);
		glVertex2f(-0.3,-0.1);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,0.0);
		glVertex2f(-0.25,0.0);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,0.1);
		glVertex2f(-0.2,0.1);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,0.2);
		glVertex2f(-0.15,0.2);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,0.3);
		glVertex2f(-0.1,0.3);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,0.4);
		glVertex2f(-0.05,0.4);
	glEnd();
	
	
	//stripes diagonal
	glBegin(GL_LINES);
		glVertex2f(0.45,-0.5);
		glVertex2f(0.475,-0.45);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.4,-0.5);
		glVertex2f(0.45,-0.4);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.35,-0.5);
		glVertex2f(0.425,-0.35);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.3,-0.5);
		glVertex2f(0.4,-0.3);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.25,-0.5);
		glVertex2f(0.375,-0.25);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.2,-0.5);
		glVertex2f(0.35,-0.2);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.15,-0.5);
		glVertex2f(0.325,-0.15);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.1,-0.5);
		glVertex2f(0.3,-0.1);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.05,-0.5);
		glVertex2f(0.275,-0.05);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,-0.5);
		glVertex2f(0.25,0.0);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,-0.4);
		glVertex2f(0.225,0.05);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,-0.3);
		glVertex2f(0.2,0.1);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,-0.2);
		glVertex2f(0.175,0.15);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,-0.1);
		glVertex2f(0.15,0.2);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,0.0);
		glVertex2f(0.125,0.25);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,0.1);
		glVertex2f(0.1,0.3);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,0.2);
		glVertex2f(0.075,0.35);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,0.3);
		glVertex2f(0.05,0.4);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0.0,0.4);
		glVertex2f(0.025,0.45);
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
