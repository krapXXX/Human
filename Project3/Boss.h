#pragma once
#include "Human.h"

class Boss : public Human
{
	char* Firm;
	double Salary;
public:
	Boss();
	Boss(const char* n, int a, const char* F, double S);
	~Boss();
	void Output();
	void Input(const char* n, int a, const char* C, double S);
};
