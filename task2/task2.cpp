#include <iostream>
#include "string"
using namespace std;

struct stek
{
    int d;
    struct stek *next;
};

void push(stek* &next, int d)
{
    stek *pv = new stek;
    pv->d = d;      
    pv->next = next;          
    next = pv;                
}
 
int pop(stek* &next)
{
    int temp = next->d;
    stek *pv = next;
    next = next->next;
    delete pv;
    return temp;
}

int main(){
	stek *next = 0;
	int i = 1;
	int x = 0;
	string answer;
	do{
		cout << "Put " << i++ << " element: ";
		cin >> x;
		push(next, x);
		cout << "Do you want continue? [Y/n]: ";
		
		cin >> answer;
		if(answer == "n"){
			break;
		}
	}while(true);
	int xn = pop(next);
	stek *newNext = 0;
	for(int j=0;j<(i-2);j++){
		push(newNext, pop(next) - xn);
	}

	for(int j=0;j<(i-2);j++){
		cout << pop(newNext) << endl;
	}
}