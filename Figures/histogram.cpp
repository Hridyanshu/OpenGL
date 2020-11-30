
#include<GL/glut.h>

int start=-6;
void myInit()
{
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-10,10,-10,10);
}

//the function creates a vertical bar of specified height and color.
//each bar is of 2 unit width
void createBar(int height, float color1, float color2, float color3)
{
	//creating bar
	glBegin(GL_LINES);
		glColor3f(color1,color2,color3);
		glVertex2i(start,-8);
		glVertex2i(start,height-8);
		glVertex2i(start,height-8);
		glVertex2i(start+2,height-8);
		glVertex2i(start+2,height-8);
		glVertex2i(start+2,-8);
	glEnd();
	
	//filling the bar with horizontal lines
	glBegin(GL_LINES);
	for(float i=-7.9;i<height-8;i=i+0.1)
	{
		glVertex2f(start,i);
		glVertex2f(start+2,i);
	}
	glEnd();
	
	//filling the bar with vertical lines
	glBegin(GL_LINES);
	for(float i=start+0.1;i<start+2;i=i+0.1)
	{
		glVertex2f(i,-8);
		glVertex2f(i,height-8);
	}
	glEnd();
	
	start=start+2;
}

void display()
{
	//creating x and y axes
	glBegin(GL_LINES);
		glVertex2i(-8,-8);
		glVertex2i(-8,8);
		glVertex2i(-8,-8);
		glVertex2i(8,-8);
	glEnd();
	
	createBar(10,1.0,0.0,0.0);
	createBar(8,0.0,1.0,0.0);
	createBar(15,0.0,0.0,1.0);
	createBar(5,1.0,1.0,0.0);
	createBar(11,1.0,0.0,1.0);
	createBar(9,0.0,1.0,1.0);
	
	glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(500,500);
	glutCreateWindow("Histogram");
	myInit();
	glutDisplayFunc(display);
	glutMainLoop();
}
