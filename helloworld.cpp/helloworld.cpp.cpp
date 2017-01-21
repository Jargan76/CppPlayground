// helloworld.cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>




int main()
{
	// good old Hello World!!
	std::cout << "Hello" << std::endl;
	std::cout << "Eric!" << std::endl;

	// little simple math
	int x = 5;
	x = x - 2;
	std::cout << "x = " << x << std::endl; // answer is 3
	int y = x; // y is now 3
	std::cout <<"y = " << y << std::endl; // answer is 3
	std::cout <<"x + y = "<< x + y << std::endl; // answer 6

	// pick a number 
	std::cout <<"Enter a number: "<< std::endl;
	// seting variable
	int i;
	// read number from console and assigns to x
	std::cin >> i;
	// responce from input
	std::cout <<"Ta Daa.. The number you picked was "<< i + i << std::endl;
	std::cout << "Just kidding. The real number is " << i << std::endl;
    return 0;


}

