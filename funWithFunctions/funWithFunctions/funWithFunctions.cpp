// funWithFunctions.cpp : playing and learning functions in c++.
//

#include "stdafx.h"
#include "iostream"

// if a function is created with int it must returns an interger value.
// if a function is created with void it doesn't have to have a return statement

void printHello() {
	std::cout << "Hello Eric."<< std::endl;
	std::cout << "We are adding your numbers up today." << std::endl;
}
// this is a nonsence function that you would never use, 
// but is perfect for this example. 
int getValue() {
	std::cout << "Enter an number: ";
	int a;
	std::cin >> a;
	return a;
}
void printX(int j) {
	std::cout <<"This is x : "<< j << std::endl;
}
void printY(int h) {
	std::cout << "This is y : " << h << std::endl;
}

int addXY(int e, int f) {
	return e + f;
}

int doubleNumber(int g) {
	return g + g;
}

int main() {
	int x = getValue();
	int y = getValue();
	printHello();
	std::cout << x << " + "<< y << " = " << addXY(x,y) << std::endl;
	printX(x);
	printY(y);
	std::cout <<"This is doudbleNumber() on x "<< doubleNumber(x) << std::endl;
    return 0;
}

