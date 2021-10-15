#include "Teapot.h"


void Teapot::Render() {


	glPushMatrix();
	glTranslatef(GetCoordinateX(), GetCoordinateY(), GetCoordinateZ());
	glColor3f(GetRedComponent(), GetGreenComponent(), GetBlueComponent());
	glRotatef(orientation.GetCoordinateX(), 1.0, 0.0, 0.0);
	glRotatef(orientation.GetCoordinateY(), 0.0, 1.0, 0.0);
	glRotatef(orientation.GetCoordinateZ(), 0.0, 0.0, 1.0);
	glutSolidTeapot(GetSize());
	glPopMatrix();
}