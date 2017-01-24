
#include "stdafx.h"

int calculateResults(int firstNumber, int op, int secondNumber) 
{	
	if (op == 1)
		return firstNumber + secondNumber;
	if(op == 2)
		return firstNumber - secondNumber;
	if(op == 3)
		return firstNumber * secondNumber;
	if (op == 4)
		return firstNumber / secondNumber;

	// error handling temp
	return - 1;
};