#include "Proff.h"
#include<iostream>
using namespace std;

Proff::Proff()
{
	cout << "Construct Proff\n";
	name = nullptr;
	age = 25;
	Uni = nullptr;
	Salary = 0;
}

Proff::Proff(const char* n, int a, const char* U, double S) :Human(n, a)
{
	cout << "Construct Proff\n";
	Salary = S;
	Uni = new char[strlen(U) + 1];
	strcpy_s(Uni, strlen(U) + 1, U);
}

Proff::~Proff()
{
	delete[] Uni;
	cout << "Destruct Proff\n";
}

void Proff::Output()
{
	cout << "Output Proff\n";
	Human::Output();
	cout << "University: " << Uni << endl
		<< "Salary: " << Salary << endl << endl;
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
	Salary = S;
	Uni = new char[strlen(U) + 1];
	strcpy_s(Uni, strlen(U) + 1, U);
}
