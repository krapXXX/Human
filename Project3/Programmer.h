#pragma once
#include "Human.h"

class Programmer : public Human  
{
	char* Company;
	double salary;
public:
	Programmer();
	Programmer(const char* n, int a, const char* C, double S);
	~Programmer();
	void Salary();
	void Output(); 
	void Input(const char* n, int a, const char* C, double S); 
};
