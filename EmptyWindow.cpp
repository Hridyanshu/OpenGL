//this code will just dispay a balnk window with the default background color.

#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

//the display function that will be registered as tthe callback display function
void display() {}

int main(int argc, char **argv)
{
	//initializes the glut
	glutInit(&argc, argv);
	//Sets the dispay mode by using some inbuilt constants
	glutInitDisplayMode(GLUT_RGB);
	
	//Setting the initial position of window in terms of coordinates
	glutInitWindowPosition(200,100);
	//Setting the height and width of the window
	glutInitWindowSize(500,500);
	
	//creating the window with the title "Basic Window"
	glutCreateWindow("Basic Window");
	
	//providing the callback display function registration for the above created window
	glutDisplayFunc(display);
	
	//the below line will keep the window displayed unless we close it
	glutMainLoop();
}
