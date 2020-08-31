//this code creates an equilateral triangle whose color is changed when any key is pressed.

#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>



void display()
{
	//clearing the buffer
	glClear(GL_COLOR_BUFFER_BIT);
	
	//providing the coordinates for the traiangle
	glBegin(GL_TRIANGLES);
		glVertex2f(-0.5,-0.5);
		glVertex2f(0.5,-0.5);
		glVertex2f(0.0,0.866);
	glEnd();
	
	//diplaying the modified buffer.
	glFlush();
}

void KeyEvent(unsigned char key, int x, int y)
{
	if(key) //if any key is pressed
	{
		//remake the same triangle but with yellow colour this time
		glColor3f(1.0,1.0,0.0);
		glBegin(GL_TRIANGLES);
			glVertex2f(-0.5,-0.5);
			glVertex2f(0.5,-0.5);
			glVertex2f(0.0,0.866);
		glEnd();
	
		//diplaying the modified buffer.
		glFlush();
	}
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	
	glutInitWindowPosition(100,200);
	glutInitWindowSize(500,500);
	glutCreateWindow("Press a Key");
	
	glutDisplayFunc(display);
	//registering the key event function
	glutKeyboardFunc(KeyEvent);
	
	glutMainLoop();
	
	return 0;
}
