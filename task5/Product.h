#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

class Product{
public:
	Product();
	~Product();
	Product(int count, float price, string name);
	float calculateProductPrice();
	int GetCountInStore();
	void SetCountInStore(int);
	float GetPrice();
	void SetPrice(float);
	string GetName();
	void SetName(string);
private:
	int countInStore;
	float price;
	string name;
};
#endif