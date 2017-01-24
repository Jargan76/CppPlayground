#include "stdafx.h"
#include <iostream>
using namespace std;

int getOperator() {
	cout << "Please choose" << endl;
		cout << "1 = + " << endl,
			cout << "2 = - " << endl;
				cout << "3 = x " << endl;
					cout << "4 = / " << endl;
	int choice;      // declair it
	cin >> choice;   // set it
	return choice;   // return it
}