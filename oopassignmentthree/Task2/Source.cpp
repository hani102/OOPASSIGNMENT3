#include "Header.h"


int main()
{
    CommMember C1;
    Employee E1("Shahzaib", "177");
    Student S1("Talat", "67890");
    Alumnis A1("Shoaib", "0165");
    Faculty F1("Smith", "Jay", "5555");

    cout << endl;

    E1.display();
    cout << endl;
    S1.display1();
    cout << endl;
    A1.display();
    cout << endl;
    F1.display();

    return 0;
}




