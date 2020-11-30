//the text will be displayed on the screen at the point where the mouse button will be clicked

#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<GL/freeglut.h>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_TRIANGLES);
		glVertex2f(-0.5,-0.5);
		glVertex2f(0.5,-0.5);
		glVertex2f(0.0,0.866);
	glEnd();
	
	glFlush();
}

// (x, y) is the mouse-click location.
// button: GLUT_LEFT_BUTTON, GLUT_RIGHT_BUTTON, GLUT_MIDDLE_BUTTON
// state: GLUT_UP, GLUT_DOWN
void mouseClick(int button, int state, int x, int y)
{
	if(button == GLUT_LEFT_BUTTON) //left click
	{
		//recreate the triangle
		glBegin(GL_TRIANGLES);
			glColor3f(1.0,1.0,1.0);
			glVertex2f(-0.5,-0.5);
			glVertex2f(0.5,-0.5);
			glVertex2f(0.0,0.866);
		glEnd();
		
		//display the text
		glColor3f(0.0,0.0,0.0);
		glRasterPos2f(-0.15,-0.3);
		glutBitmapString(GLUT_BITMAP_HELVETICA_18, (unsigned char*)("Hridyanshu"));
	
		glFlush();
	}
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	
	glutInitWindowPosition(300,200);
	glutInitWindowSize(500,500);
	
	glutCreateWindow("Click to see");
	
	glutDisplayFunc(display);
	//registering the mouse click event function
	glutMouseFunc(mouseClick);
	
	glutMainLoop();
	
	return 0;
}
