#include "Programmer.h"
#include<iostream>
using namespace std;

Programmer::Programmer()
{
	cout << "Construct Programmer\n";
	name = nullptr;
	age = 25;
	Company = nullptr;
	Salary = 0;
}

Programmer::Programmer(const char* n, int a, const char* C, double S):Human(n,a)
{
	cout << "Construct Programmer\n";
	Salary = S;
	Company = new char[strlen(C) + 1];
	strcpy_s(Company, strlen(C) + 1, C);
}

Programmer::~Programmer()
{
	delete[] Company;
	cout << "Destruct Programmer\n";
}

void Programmer::Output()
{
	cout << "Output Programmer\n";
	Human::Output();
	cout << "Company: " << Company << endl
		<< "Salary: " << Salary << endl << endl;
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
	Salary = S;
	Company = new char[strlen(C) + 1];
	strcpy_s(Company, strlen(C) + 1, C);
}
