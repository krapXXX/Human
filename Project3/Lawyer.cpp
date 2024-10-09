#include "Lawyer.h"
#include<iostream>
using namespace std;

Lawyer::Lawyer()
{
	cout << "Construct Lawyer\n";
	name = nullptr;
	age = 25;
	Firm = nullptr;
	Salary = 0;
}

Lawyer::Lawyer(const char* n, int a, const char* F, double S) :Human(n, a)
{
	cout << "Construct Lawyer\n";
	Salary = S;
	Firm = new char[strlen(F) + 1];
	strcpy_s(Firm, strlen(F) + 1, F);
}

Lawyer::~Lawyer()
{
	delete[] Firm;
	cout << "Destruct Lawyer\n";
}

void Lawyer::Output()
{
	cout << "Output Lawyer\n";
	Human::Output();
	cout << "Firm: " << Firm << endl
		<< "Salary: " << Salary << endl << endl;
}

void Lawyer::Input(const char* n, int a, const char* F, double S)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	if (Firm != nullptr)
	{
		delete[] Firm;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;
	Salary = S;
	Firm = new char[strlen(F) + 1];
	strcpy_s(Firm, strlen(F) + 1, F);
}
