#include "Designer.h"
#include<iostream>
using namespace std;

Designer::Designer()
{
	cout << "Construct Designer\n";
	name = nullptr;
	age = 25;
	Company = nullptr;
	Salary = 0;
}

Designer::Designer(const char* n, int a, const char* C, double S) :Human(n, a)
{
	cout << "Construct Designer\n";
	Salary = S;
	Company = new char[strlen(C) + 1];
	strcpy_s(Company, strlen(C) + 1, C);
}

Designer::~Designer()
{
	delete[] Company;
	cout << "Destruct Designer\n";
}

void Designer::Output()
{
	cout << "Output Designer\n";
	Human::Output();
	cout << "Company: " << Company << endl
		<< "Salary: " << Salary << endl << endl;
}

void Designer::Input(const char* n, int a, const char* C, double S)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	if (Company != nullptr)
	{
		delete[] Company;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;
	Salary = S;
	Company = new char[strlen(C) + 1];
	strcpy_s(Company, strlen(C) + 1, C);
}
