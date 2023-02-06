#include <iostream>
#include <cmath>

using namespace std;
class Shape {
protected:
	int width;
	int len;
	int height;

public:
	virtual int area() {

		cout << "Shape" << endl;
		return 0;
	}

	virtual int volume() {
		cout << "Shape Volume" << endl;
		return 0;
	}

	void display() {
		cout << "SHAPE FUNCTION" << endl;
	}
};

class TwoDimShape :public Shape {
public:
	TwoDimShape() {
		cout << "TWODIMSHAPE" << endl;
	}

	int volume() {
		cout << "TwoDimShape Volume" << endl;
		return 0;
	}
};

class Triangle : public TwoDimShape {
public:
	Triangle(int length, int wid, int heigh) {
		len = length;
		width = wid;
		height = heigh;
	}

	int area() {
		int d;
		cout << "TRIANGLE " << endl;
		d = (0.5 * width * height);
		return d;
	}

	int volume() {
		cout << "Triangle Volume" << endl;
		return 0;
	}
};

class Square : public TwoDimShape {
public:
	Square(int length, int wid, int heigh) {
		len = length;
		width = wid;
		height = heigh;
	}

	int area() {
		int g;
		cout << "SQUARE" << endl;
		g = (height * height);
		return g;
	}

	int volume() {
		cout << "Square Volume" << endl;
		return 0;
	}

	~Square() {
	}
};

class Circle : public TwoDimShape {
public:
	Circle(int length, int wid, int heigh) {
		len = length;
		width = wid;
		height = heigh;
	}

	int area() {
		int z;
		cout << "Circle" << endl;
		z = (3.14 * 100);
		return z;
	}

	int volume() {
		cout << "Circle Volume" << endl;
		return 0;
	}

	~Circle() {
	}
};

class ThreeDimShape : public Shape {
public:
	ThreeDimShape(int length, int wid, int heigh) {
		len = length;
		width = wid;
		height = heigh;
	}

	ThreeDimShape() {
		cout << "ThreeDIMSHAPE" << endl;
	}

	int volume() {
		cout << "ThreeDimShape Volume" << endl;
		return 0;
	}
};

class Tetrahedron : public ThreeDimShape {
public:
	Tetrahedron(int length, int wid, int heigh) : ThreeDimShape(length, wid, heigh) {}

	int area() {
		int a = len * height / 2;
		cout << "Tetrahedron area: " << a << endl;
		return a;
	}

	int volume() {
		int v = len * width * height / 6;
		cout << "Tetrahedron volume: " << v << endl;
		return v;
	}
};
class Sphere : public ThreeDimShape {
public:
	Sphere(int length, int wid, int heigh) : ThreeDimShape(length, wid, heigh) {}

	int area() {
		int a = 4 * 3.14 * pow(len, 2);
		cout << "Sphere area: " << a << endl;
		return a;
	}

	int volume() {
		int v = (4 / 3) * 3.14 * pow(len, 3);
		cout << "Sphere volume: " << v << endl;
		return v;
	}
};

class Cube : public ThreeDimShape {
public:
	Cube(int length, int wid, int heigh) : ThreeDimShape(length, wid, heigh) {}

	int area() {
		int a = 6 * pow(len, 2);
		cout << "Cube area: " << a << endl;
		return a;
	}

	int volume() {
		int v = pow(len, 3);
		cout << "Cube volume: " << v << endl;
		return v;
	}
};












