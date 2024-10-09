#include "Boss.h"
#include<iostream>
using namespace std;

Boss::Boss()
{
	cout << "Construct Boss\n";
	name = nullptr;
	age = 25;
	Firm = nullptr;
	Salary = 0;
}

Boss::Boss(const char* n, int a, const char* F, double S) :Human(n, a)
{
	cout << "Construct Boss\n";
	Salary = S;
	Firm = new char[strlen(F) + 1];
	strcpy_s(Firm, strlen(F) + 1, F);
}

Boss::~Boss()
{
	delete[] Firm;
	cout << "Destruct Boss\n";
}

void Boss::Output()
{
	cout << "Output Boss\n";
	Human::Output();
	cout << "Firm: " << Firm << endl
		<< "Salary: " << Salary << endl << endl;
}

void Boss::Input(const char* n, int a, const char* F, double S)
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
