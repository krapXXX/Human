#include "Boss.h"
#include<iostream>
using namespace std;

Boss::Boss()
{
	cout << "Construct Boss\n";
	name = nullptr;
	age = 25;
	Firm = nullptr;
	salary = 0;
}

Boss::Boss(const char* n, int a, const char* F, double S) :Human(n, a)
{
	cout << "Construct Boss\n";
	salary = S;
	Firm = new char[strlen(F) + 1];
	strcpy_s(Firm, strlen(F) + 1, F);
}

Boss::~Boss()
{
	delete[] Firm;
	cout << "Destruct Boss\n";
}

void Boss::Salary()
{
	cout << "Salary of the boss: " << salary << endl;
}

void Boss::Output()
{
	cout << "Output Boss\n";
	cout << "Name: " << name << endl
		<< "Age: " << age << endl;
	cout << "Firm: " << Firm << endl
		<< "Salary: " << salary << endl << endl;
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
	salary = S;
	Firm = new char[strlen(F) + 1];
	strcpy_s(Firm, strlen(F) + 1, F);
}
