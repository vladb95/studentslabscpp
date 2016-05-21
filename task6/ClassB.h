#ifndef CLASSB_H
#define CLASSB_H
#include <iostream>
#include "string"
#include <cmath>
#include "ClassA.h"
using namespace std;

class ClassB{
public:
	ClassB();
	ClassB(int);
	ClassB(ClassA*);
	~ClassB();
	int GetAVal();
	ClassB operator+(ClassB rv);
	void operator=(ClassB rv);
private:
	ClassA* a;
};

#endif