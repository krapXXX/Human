#pragma once
#include "Human.h"

class Proff : public Human 
{
	char* Uni;
	double salary;
public:
	Proff();
	Proff(const char* n, int a, const char* U, double S);
	~Proff();
	void Salary();
	void Output(); 
	void Input(const char* n, int a, const char* C, double S); 
};
