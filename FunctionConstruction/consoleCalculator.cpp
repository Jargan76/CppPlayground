// FunctionConstruction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "calculateResults.h"
#include "getAValue.h"
#include "getOperator.h"
#include "printToConsole.h"

int main()
{		
	// get first number from user
	int input1 = getAValue(); 

	// Get opertator from user
	int op =  getOperator();

	// Get second number user
	int input2 = getAValue(); 

	// Do the math
	int results = calculateResults(input1, op, input2);

	// Display results to the user
	printToConsole(input1, op, input2, results);

    return 0;
}

