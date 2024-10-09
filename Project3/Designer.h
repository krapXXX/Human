#pragma once
#include "Human.h"

class Designer : public Human
{
	char* Company;
	double Salary;
public:
	Designer();
	Designer(const char* n, int a, const char* C, double S);
	~Designer();
	void Output();
	void Input(const char* n, int a, const char* C, double S);
};
