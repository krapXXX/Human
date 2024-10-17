#include "Proff.h"
#include<iostream>
using namespace std;

Proff::Proff()
{
	cout << "Construct Proff\n";
	name = nullptr;
	age = 25;
	Uni = nullptr;
	salary = 0;
}

Proff::Proff(const char* n, int a, const char* U, double S) :Human(n, a)
{
	cout << "Construct Proff\n";
	salary = S;
	Uni = new char[strlen(U) + 1];
	strcpy_s(Uni, strlen(U) + 1, U);
}

Proff::~Proff()
{
	delete[] Uni;
	cout << "Destruct Proff\n";
}

void Proff::Salary()
{
	cout << "Salary of the proffesor: " << salary << endl;
}

void Proff::Output()
{
	cout << "Output Proff\n";
	cout << "Name: " << name << endl
		<< "Age: " << age << endl;
	cout << "University: " << Uni << endl
		<< "Salary: " << salary << endl << endl;
}

void Proff::Input(const char* n, int a, const char* U, double S)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	if (Uni != nullptr)
	{
		delete[] Uni;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;
	salary = S;
	Uni = new char[strlen(U) + 1];
	strcpy_s(Uni, strlen(U) + 1, U);
}
