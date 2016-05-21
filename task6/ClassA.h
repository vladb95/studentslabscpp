#ifndef CLASSA_H
#define CLASSA_H
#include <iostream>
#include "string"
#include <cmath>
using namespace std;

class ClassA{
public:
	ClassA();
	ClassA(int);
	~ClassA();
	int getA();
	void setA(int);
private:
	int a;
};
#endif