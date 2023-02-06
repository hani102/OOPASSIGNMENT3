#include"Header.h"


int main() {
	Player p("Sachin Tendulkar", 15);
	p.display();

	
	Bowler B1(12);
	B1.display();

	Batsman d1;
	Batsman d2(17.1,{12,13,14,15,16,17,12,10,8,10 }, 12);
	d2.CalcAvg();
	d2.display();




}



