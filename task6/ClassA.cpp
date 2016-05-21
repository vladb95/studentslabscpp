#include "ClassA.h"

ClassA::ClassA(){
	a = 0;
}

ClassA::ClassA(int val){
	a = val;
}

ClassA::~ClassA(){
}

int ClassA::getA(){
	return a;
}

void ClassA::setA(int val){
	a = val;
}