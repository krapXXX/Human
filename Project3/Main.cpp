#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Programmer.h"
#include "Proff.h"
#include "Boss.h"
#include "Lawyer.h"
#include "Designer.h"
using namespace std;

int main()
{
	/*Student s("Oleg", 19, "Itstep", 2000);
	Programmer p("Alex", 30, "Google", 65000);
	Proff pr("Lily", 27, "N¹45", 15000);
	Boss b;
	b.Input("Kate", 45, "Silk-SPA", 100000);
	Lawyer l;
	l.Input("Igor", 52, "LUHU", 30000);
	Designer d;
	d.Input("Varya", 18, "Boo", 1500);
	s.Output();
	s.Input("Irina",20,"Politex",200);
	s.Output();
	d.Output();
	p.Output();
	 pr.Output();
    b.Output();
     l.Output();*/
	Human* human = nullptr;
	cout << "Who do you want to Print?" << endl;
	cout << "1 - Student" << endl;
	cout << "2 - Programmer" << endl;
	cout << "3 - Proffesor" << endl;
	cout <<"4 - Boss" << endl;
	cout << "5 - Lawyer" << endl;
	cout << "6 - Designer" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1: 
		human = new Student("Oleg", 19, "Itstep", 2000);
		break;
	case 2:
		human = new Programmer("Alex", 30, "Google", 65000);
		break;
	case 3:
		human = new Proff("Lily", 27, "N¹45", 15000);
		break;
	case 4:
		human = new Boss("Kate", 45, "Silk-SPA", 100000);
		break;
	case 5:
		human = new Lawyer("Igor", 52, "LUHU", 30000);
		break;
	case 6:
		human = new Designer("Varya", 18, "Boo", 1500);
		break;
	}
	human->Output();


	cout << "Whose salary you want to Print?" << endl;
	cout << "1 - Student" << endl;
	cout << "2 - Programmer" << endl;
	cout << "3 - Proffesor" << endl;
	cout << "4 - Boss" << endl;
	cout << "5 - Lawyer" << endl;
	cout << "6 - Designer" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		human = new Student("Oleg", 19, "Itstep", 2000);
		break;
	case 2:
		human = new Programmer("Alex", 30, "Google", 65000);
		break;
	case 3:
		human = new Proff("Lily", 27, "N¹45", 15000);
		break;
	case 4:
		human = new Boss("Kate", 45, "Silk-SPA", 100000);
		break;
	case 5:
		human = new Lawyer("Igor", 52, "LUHU", 30000);
		break;
	case 6:
		human = new Designer("Varya", 18, "Boo", 1500);
		break;
	}
	human->Salary();


	Human* humans[6]{ new Student("Oleg", 19, "Itstep", 2000), new Programmer("Alex", 30, "Google", 65000),new Proff("Lily", 27, "N¹45", 15000), new  Boss("Ann", 19, "Silk-SPA", 100000), new Lawyer("Igor", 52, "LUHU", 30000), new Designer("Varya", 18, "Boo", 1500) };
	for (int i = 0; i < 6; i++)
	{
		humans[i]->Output();
	}
}