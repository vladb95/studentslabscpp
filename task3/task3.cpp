#include <iostream>
#include "string"
using namespace std;

struct Lecture{
	int number;
	double length;
	string topic;
};

void validator(Lecture* &lect){
	if(lect->number < 0){
		lect->number = 1;
	}
	if(lect->length <= 0){
		lect->length = 1.5;
	}
}

Lecture * getInfoForLecture(){
	Lecture * buff = new Lecture;
	int number;
	double length;
	string topic;

	cout << "Enter number of lecture: ";
	cin >> number;

	cout << "Enter length: ";
	cin >> length;

	cout << "Enter topic: ";
	cin >> topic;

	buff->number = number;
	buff->length = length;
	buff->topic = topic;

	return buff;
}

void printLecture(Lecture* &lect){
	cout << "Lecture number " << lect->number << " with length " << lect->length << " and topic " << lect->topic << endl;
}

double getLength(Lecture* first, Lecture* second){
	return first->length + second->length;
}

double getLength(Lecture* first, Lecture* second, Lecture* third){
	return first->length + second->length + third->length;
}

int main(){
	Lecture *first, *second, *third;

	cout << "Enter info for first lecture\n";
	first = getInfoForLecture();
	validator(first);

	cout << "Enter info for second lecture\n";
	second = getInfoForLecture();
	validator(second);

	cout << "Enter info for third lecture\n";
	third = getInfoForLecture();
	validator(third);

	printLecture(first);
	printLecture(second);
	printLecture(third);

	cout << "First and third lectures: " << getLength(first, third) << "\n";
	
	cout << "First and second lectures: " << getLength(first, second) << "\n";

	cout << "Second and third lectures: " << getLength(third, second) << "\n";

	cout << "Length of all lectures: " << getLength(third, second, first) << "\n";
	}