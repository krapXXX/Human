#pragma once
#include "Human.h"
class Lawyer : public Human
{
	char* Firm;
	double salary;
public:
	Lawyer();
	Lawyer(const char* n, int a, const char* F, double S);
	~Lawyer();
	void Salary();
	void Output();
	void Input(const char* n, int a, const char* F, double S);
};

