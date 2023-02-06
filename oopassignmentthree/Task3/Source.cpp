#include "Header.h"

int main() {
	Shape* shape;
	TwoDimShape twodimshape;
	Triangle triangle(10, 20, 30);
	Square square(40, 50, 60);
	Circle circle(70, 80, 90);
	ThreeDimShape threedimshape(100, 200, 300);
	Tetrahedron tetrahedron(400, 500, 600);
	Sphere sphere(700, 800, 900);
	Cube cube(1000, 2000, 3000);

	shape = &twodimshape;
	shape->display();
	shape->area();
	shape->volume();
	cout << endl;

	shape = &triangle;
	shape->display();
	shape->area();
	shape->volume();
	cout << endl;

	shape = &square;
	shape->display();
	shape->area();
	shape->volume();
	cout << endl;

	shape = &circle;
	shape->display();
	shape->area();
	shape->volume();
	cout << endl;

	shape = &threedimshape;
	shape->display();
	shape->area();
	shape->volume();
	cout << endl;

	shape = &tetrahedron;
	shape->display();
	shape->area();
	shape->volume();
	cout << endl;

	shape = &sphere;
	shape->display();
	shape->area();
	shape->volume();
	cout << endl;

	shape = &cube;
	shape->display();
	shape->area();
	shape->volume();

	return 0;
}
