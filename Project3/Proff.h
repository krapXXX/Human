#pragma once
#include "Human.h"

class Proff : public Human 
{
	char* Uni;
	double Salary;
public:
	Proff();
	Proff(const char* n, int a, const char* U, double S);
	~Proff();
	void Output(); 
	void Input(const char* n, int a, const char* C, double S); 
};
