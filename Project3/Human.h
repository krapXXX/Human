#pragma once
class Human  // base class
{
protected:
	char* name;
	int age;
public:
	Human();
	Human(const char*, int);
	virtual void Output() = 0;
	virtual void Salary() = 0;
	void Input();

	~Human();
};