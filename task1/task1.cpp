#include <iostream>
#include "string"
#include <cmath>
#include "CalcClasses.h"
using namespace std;

int main(int args, char* argv[]){
	Apex A;
	Apex B;
	Apex C;
	A.Initialize("A");
	B.Initialize("B");
	C.Initialize("C");
	Calculate::Calc(A, B, C);
	return 0;
}