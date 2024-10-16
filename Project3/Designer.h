#pragma once
#include "Human.h"

class Designer : public Human
{
	char* Company;
	double salary;
public:
	Designer();
	Designer(const char* n, int a, const char* C, double S);
	~Designer();
	void Salary();
	void Output();
	void Input(const char* n, int a, const char* C, double S);
};
