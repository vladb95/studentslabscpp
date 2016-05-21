#include "Product.h"
#include <string>

Product::Product(){
	countInStore = 0;
	price = 0.0f;
}

Product::~Product(){
	
}

Product::Product(int _count, float _price, string _name){
	countInStore = _count;
	price = _price;
	name = _name;
}

int Product::GetCountInStore(){
	return countInStore;
}

void Product::SetCountInStore(int value){
	countInStore = value;
}

void Product::SetPrice(float value){
	price = value;
}

float Product::GetPrice(){
	return price;
}

string Product::GetName(){
	return name;
}

void Product::SetName(string value){
	name = value;
}

float Product::calculateProductPrice(){
	return countInStore * price;
}