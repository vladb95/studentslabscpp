#include "Product.h"
#include <iostream>
#include <string>
using namespace std;
/* To compile this task use g++ *.cpp -o task5 */
int main(){
	Product* prod = new Product();
	cout << "Set product name: ";
	string name;
	cin >> name;
	prod->SetName(name);
	cout << "Set product price: ";
	float price;
	cin >> price;
	prod->SetPrice(price);
	cout << "Put count in store: ";
	int count;
	cin >> count;
	prod->SetCountInStore(count);
	cout << prod->GetName() << " " <<  prod->calculateProductPrice() << endl;
}