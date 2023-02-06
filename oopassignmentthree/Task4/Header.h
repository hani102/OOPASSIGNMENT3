#include <iostream>

using namespace std;



class Profession {
private:
	 char* s;

public:

	Profession() {
		cout << "PROFESSION.." << endl;
	}

	Profession(const char* name) {
		{
			int length = 0;
			for (int i = 0; name[i] != '\0'; i++) {
				length++;
			}
			s = new char[length + 1];
			for (int i = 0; i < length; i++) {
				s[i] = name[i];
			}
			s[length] = '\0';
		}



	}
	void display() {
		cout << "PROFESSION" << s;
	}

	~Profession() {
		delete[]s;
	}
	
};

class Driver:public Profession {
private:
	string h;


public:

	Driver() {
		cout << "DRIVER.." << endl;
	}

	Driver(string m, const char*s):Profession(s) {
		h = m;
	}

	void display1() {
		Profession::display();
		cout << h << "Is the driver" << endl;
	}

	~Driver() {
		
	}




};
class Competitor :public Profession {

private:
	string d;


public:
	Competitor() {
		cout << "COMPETITOR" << endl;
	}


	Competitor(string c, const char* k) :Profession(k) {
		d = c;
	}


	void display2() {
		Profession::display();
		cout << "COMPETITOR IS" << d << endl;
	}

	~Competitor() {

	}

};

class RaceCarDriver :public Driver, public Competitor {

private:
	string s;



public:
	RaceCarDriver() {
		cout << "RACECAR DRIVER" << endl;
	}

	RaceCarDriver(string j, string l, string q, const char* z, string g, const char* i) :Driver(l, z), Competitor(g, i) {
		s = j;

	}

	void display3() {
		Driver::display1();
		Competitor::display2();
		cout << "RACECARDRIVER IS" << s << endl;
	}


	~RaceCarDriver() {

	}




};


