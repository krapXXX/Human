#pragma once
#include "Human.h"
class Lawyer : public Human
{
	char* Firm;
	double Salary;
public:
	Lawyer();
	Lawyer(const char* n, int a, const char* F, double S);
	~Lawyer();
	void Output();
	void Input(const char* n, int a, const char* F, double S);
};

