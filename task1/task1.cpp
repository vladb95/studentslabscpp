#include <iostream>
#include "string"
#include <cmath>
using namespace std;

class Apex
{
public:
	int x;
	int y;
	int z;
	void Initialize(string APEX_NAME){
		cout << "Put coordinats to apex " << APEX_NAME << endl;
		cout << "Put x:";
		cin >> x;
		cout << "Put y:";
		cin >> y;
		cout << "Put z:";
		cin >> z;
	}
};

float CalculateLength(Apex A, Apex B){
		float a = B.x - A.x;
		float b = B.y - A.y;
		float c = B.z - A.z;
		return sqrt(a*a + b*b + c*c);
	}

float Semiperimeter(float a, float b, float c){
		return (a + b + c)/2.0;
	}

float CalcArea(float a, float b, float c){
		float p = Semiperimeter(a, b, c);
		cout << 2.0 * p << endl;
		return sqrt(p * (p - a)*(p - b)* (p - c));
	}

float Calc(Apex A, Apex B, Apex C){
		float a = CalculateLength(A, B);
		float b = CalculateLength(B, C);
		float c = CalculateLength(A, C);
		float area = CalcArea(a, b, c);
		if(a<=0||b<=0||c<=0||area<=0){
			cout << "Imposible coordinats for triangle" << endl;
			return 0;
		}
		cout << area << endl;
		return area;
	}
	
int main(int args, char* argv[]){
	Apex A;
	Apex B;
	Apex C;
	A.Initialize("A");
	B.Initialize("B");
	C.Initialize("C");
	Calc(A, B, C);
	return 0;
}