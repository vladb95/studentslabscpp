#include "ClassB.h"

ClassB::ClassB(){
	a = new ClassA(0);
}

ClassB::ClassB(int val){
	a = new ClassA(val);
}

ClassB::ClassB(ClassA* _a){
	a = _a;
}

ClassB::~ClassB(){
	//delete a;
}

int ClassB::GetAVal(){
	return a->getA();
}

ClassB ClassB::operator+ (ClassB rv) {
	int newVal = a->getA() + rv.GetAVal();
	a->setA(newVal);
    return (newVal);
}

void ClassB::operator= (ClassB rv) {
	a->setA(rv.GetAVal());
}