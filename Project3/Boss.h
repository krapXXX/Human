#pragma once
#include "Human.h"

class Boss : public Human
{
	char* Firm;
	double salary;
public:
	Boss();
	Boss(const char* n, int a, const char* F, double S);
	~Boss();
	void Salary();
	void Output();
	void Input(const char* n, int a, const char* C, double S);
};
