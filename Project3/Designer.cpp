#include "Designer.h"
#include<iostream>
using namespace std;

Designer::Designer()
{
	cout << "Construct Designer\n";
	name = nullptr;
	age = 25;
	Company = nullptr;
	salary = 0;
}

Designer::Designer(const char* n, int a, const char* C, double S) :Human(n, a)
{
	cout << "Construct Designer\n";
	salary = S;
	Company = new char[strlen(C) + 1];
	strcpy_s(Company, strlen(C) + 1, C);
}

Designer::~Designer()
{
	delete[] Company;
	cout << "Destruct Designer\n";
}

void Designer::Salary()
{
	cout << "Salary of the designer: " << salary << endl;
}

void Designer::Output()
{
	cout << "Output Designer\n";
	cout << "Name: " << name << endl
		<< "Age: " << age << endl;
	cout << "Company: " << Company << endl
		<< "Salary: " << salary << endl << endl;
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
	salary = S;
	Company = new char[strlen(C) + 1];
	strcpy_s(Company, strlen(C) + 1, C);
}
