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

class Calculate
{
public:
	static float Calc(Apex A, Apex B, Apex C){
		float a = Calculate::CalculateLength(A, B);
		float b = Calculate::CalculateLength(B, C);
		float c = Calculate::CalculateLength(A, C);
		float area = Calculate::CalcArea(a, b, c);
		if(a<=0||b<=0||c<=0||area<=0){
			cout << "Imposible coordinats for triangle" << endl;
			return 0;
		}
		cout << area << endl;
		return area;
	}
	static float CalculateLength(Apex A, Apex B){
		float a = B.x - A.x;
		float b = B.y - A.y;
		float c = B.z - A.z;
		return sqrt(a*a + b*b + c*c);
	}
	static float Semiperimeter(float a, float b, float c){
		return (a + b + c)/2.0;
	}
	static float CalcArea(float a, float b, float c){
		float p = Calculate::Semiperimeter(a, b, c);
		cout << p << endl;
		return sqrt(p * (p - a)*(p - b)* (p - c));
	}
};