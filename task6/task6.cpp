#include <iostream>
#include "string"
#include <cmath>
#include "ClassB.h"
using namespace std;

int main(){
	ClassB first(10);
	ClassB second(6);
	ClassB third(3);
	third= first+ second;
	cout << third.GetAVal() << endl;
	cout << first.GetAVal() << endl;
}