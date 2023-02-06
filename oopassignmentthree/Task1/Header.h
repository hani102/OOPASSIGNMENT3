#include <iostream>
using namespace std;


class Player {

private:
	char* name;
	int matches;


public:
	Player() {
		cout << "Player" << endl;
	}

	Player(const char*h, int j){

		int length = 0;
		for (int i = 0; h[i] != '\0'; i++)
		{
			length++;
		}
		name = new char[length + 1];
		for (int i = 0; i < length; i++) {
			name[i] = h[i];
		}
		name[length] = '\0';

		matches = j;
	}
	void setnameattr(const char*h, int j){
		int length = 0;
		for (int i = 0; h[i] != '\0'; i++)
		{
			length++;
		}
		name = new char[length + 1];
		for (int i = 0; i < length; i++) {
			name[i] = h[i];
		}
		name[length] = '\0';

		matches = j;
	}




	

	void display() {
		cout << "Name" << name;
		cout << "matches" << matches;
	}


};

class Bowler:public Player {
private:
	int wickets;


public:
	Bowler() {
		cout << "BOWLER" << endl;
	}


 Bowler(int n){
		wickets = n;
		
	}

 void setBattr( int n) {
	 wickets = n;
 }

	void display() {
		cout << "wickets" << wickets << endl;
		
	}




};

class Batsman : public Player {

private:
	float totalscore;
	float permatchscore[10];
	float average;

public:
	Batsman() {
		cout << "BATSMAN.." << endl;
	}

	Batsman(float ts, float permatchscore_[10], float g) {
		totalscore = ts;
		for (int i = 0; i < 10; i++) {
			permatchscore[i] = permatchscore_[i];
		}
		average = g;
	}

	void CalcAvg() {
		int sum = 0;
		for (int i = 0; i < 10; i++) {
			sum += permatchscore[i];
		}
		average = (float)sum / 10;
	}

	void display() {
		Player::display();
		cout << "Score: " << totalscore << endl;
		cout << "Per match score: ";
		for (int i = 0; i < 10; i++) {
			std::cout << permatchscore[i] << " ";
		}
		cout << endl << "Average: " << average;
	}
};




