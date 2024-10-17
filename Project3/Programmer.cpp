#include "Programmer.h"
#include<iostream>
using namespace std;

Programmer::Programmer()
{
	cout << "Construct Programmer\n";
	name = nullptr;
	age = 25;
	Company = nullptr;
	salary = 0;
}

Programmer::Programmer(const char* n, int a, const char* C, double S):Human(n,a)
{
	cout << "Construct Programmer\n";
	salary = S;
	Company = new char[strlen(C) + 1];
	strcpy_s(Company, strlen(C) + 1, C);
}

Programmer::~Programmer()
{
	delete[] Company;
	cout << "Destruct Programmer\n";
}

void Programmer::Salary()
{
	cout << "Salary of the programmer: " << salary << endl;
}

void Programmer::Output()
{
	cout << "Output Programmer\n";
	Human::Output();
	cout << "Company: " << Company << endl
		<< "Salary: " << salary << endl << endl;
}

void Programmer::Input(const char* n, int a, const char* C, double S)
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
