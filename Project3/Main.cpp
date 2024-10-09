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
	Student s("Oleg",19,"Itstep",2000);
	s.Output();
	s.Input("Irina",20,"Politex",200);
	s.Output();
	Programmer p("Alex", 30, "Google", 65000);
	p.Output();
	Proff pr("Lily", 27, "N¹45", 15000);
	pr.Output();
	Boss b;
	b.Input("Kate", 45, "Silk-SPA", 100000);
	b.Output();
	Lawyer l;
	l.Input("Igor", 52, "LUHU", 30000);
	l.Output();
	Designer d;
	d.Input("Varya", 18, "Boo", 1500);
	d.Output();

}