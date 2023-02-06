#include <iostream>
using namespace std;



class CommMember {
private:
	char* f;

public:
	CommMember() {
		cout << "COMM member" << endl;
	}



	CommMember(const char* a) {

		int length = 0;

		for (int i = 0; a[i] != '\0'; i++) {
			length++;
		}
		f = new char[length + 1];
		for (int i = 0; i < length; i++) {
			f[i] = a[i];

		}
		f[length] = '\0';
	}

	void dis() {
		cout << "COMMUNITY MEMBER" << " " << f << endl;

	}


	~CommMember() {
		delete[] f;
	}

};

class Employee :public CommMember {
private:

	char* employee;

public:
	Employee() {
		cout << "EMPLOYEE.." << endl;
	}

	Employee(const char* g, const char* k) :CommMember(k) {
		{
			int length = 0;

			for (int i = 0; g[i] != '\0'; i++) {
				length++;

			}
			employee = new char[length + 1];
			for (int i = 0; i < length; i++) {
				employee[i] = g[i];

			}
			employee[length] = '\0';
		}



	}


	void display() {
	CommMember:dis();
		cout << "employee" << " " << employee << endl;

	}




	~Employee() {
		delete[]employee;

	}



};

class Student :public CommMember {
private:
	char* aStudent;


public:

	Student() {
		cout << "STUDENT.." << endl;
	}

	Student(const char* h, const char* k) :CommMember(k) {

		{
			int length = 0;
			for (int i = 0; h[i] != '\0'; i++) {
				length++;
			}
			aStudent = new char[length + 1];
			for (int i = 0; i < length; i++) {

				aStudent[i] = h[i];
			}
			aStudent[length] = '\0';






		}






	}
	void display1() {
	CommMember:dis();
		cout << "STUDENT" << "  " << aStudent << endl;


	}

	~Student() {
		delete[]aStudent;
	}





};

class Alumnis :public CommMember {
private:
	char* j;



public:

	Alumnis() {
		cout << "ALUMNIS.." << endl;
	}

	Alumnis(const char* k, const char* z) :CommMember(z) {
		{
			int length = 0;
			for (int i = 0; k[i] != '\0'; i++) {
				length++;
			}
			j = new char[length + 1];
			for (int i = 0; i < length; i++) {
				j[i] = k[i];
			}
			j = new char[length + 1];
		}

	}


	void display() {
	CommMember:dis();
		cout << "ALUMNIS" << " " << j << endl;
	}


	~Alumnis() {
		delete[]j;
	}




};

class Faculty :public Employee {

private:
	char* Fac;

public:

	Faculty() {
		cout << "FACULTY.." << endl;
	}


	Faculty(const char* n, const char* k, const char* j) :Employee(k, j) {
		{
			int length = 0;
			for (int i = 0; n[i] != '\0'; i++) {
				length++;
			}
			Fac = new char[length + 1];
			for (int i = 0; i < length; i++) {
				Fac[i] = n[i];
			}
			Fac[length] = '\0';



		}



	}

	void display() {
		Employee::display();
		cout << "FACULTY..." << " " << Fac << endl;




	}

	~Faculty() {
		delete[]Fac;
	}

};

class Staff :public Employee {
private:
	char* b;


public:

	Staff() {
		cout << "STAFF" << endl;
	}
	Staff(const char* v, const char* j, const char* i) :Employee(j, i) {
		{
			int length = 0;
			for (int i = 0; v[i] != '\0'; i++) {
				length++;
			}
			b = new char[length + 1];
			for (int i = 0; i < length; i++) {
				b[i] = v[i];
			}
			b[length] = '\0';


		}






	}

	void display() {
		Employee::display();
		cout << "STAFF " << b << endl;

	}



	~Staff() {
		delete[]b;
	}








};

class Admin :public Faculty {

private:
	char* k;


public:
	Admin() {
		cout << "ADMIN.." << endl;
	}


	Admin(const char* a, const char* z, const char* ll, const char* nn) :Faculty(z, ll, nn) {
		{
			int length = 0;
			for (int i = 0; a[i] != '\0'; i++) {
				length++;
			}
			k = new char[length + 1];
			for (int i = 0; i < length; i++) {
				k[i] = a[i];
			}
			k[length] = '\0';
		}

	}

	void display2() {
		Faculty::display();
		cout << "ADMIN.." << k << endl;

	}

	~Admin() {
		delete[]k;
	}

};
class Teacher :public Faculty {
private:
	char* aTeacher;


public:
	Teacher() {
		cout << "TEACHER.." << endl;
	}

	Teacher(const char* p, const char* q, const char* z, const char* m) :Faculty(q, z, m) {

		{
			int length = 0;
			for (int i = 0; p[i] != '\0'; i++) {
				length++;

			}
			aTeacher = new char[length + 1];
			for (int i = 0; i < length; i++) {
				aTeacher[i] = p[i];
			}
			aTeacher[length] = '\0';



		}



	}


	void display3() {
		Faculty::display();
		cout << "TEACHER.. " << aTeacher << endl;

	}



	~Teacher() {
		delete[]aTeacher;
	}


};

class AdministratorTeacher :public Admin, public Teacher {
private:
	char* AAdmin;



public:

	AdministratorTeacher() {
		cout << "ADMIN TEACHER.." << endl;
	}

	AdministratorTeacher(const char* z, const char* y, const char* o, const char* k, const char* h, const char* i, const char* b, const char* t, const char* e) :Admin(y, o, k, h), Teacher(i, b, t, e) {
		{

			int length = 0;
			for (int i = 0; z[i] != '\0'; i++) {
				length++;
			}
			AAdmin = new char[length + 1];
			for (int i = 0; i < length; i++) {
				AAdmin[i] = z[i];
			}



		}
	}

	void display3() {
		Admin::display2();
		Teacher::display3();
		cout << endl;
		cout << "ADMIN TEACHER" << AAdmin << endl;

	}



	~AdministratorTeacher() {
		delete[]AAdmin;
	}




};







