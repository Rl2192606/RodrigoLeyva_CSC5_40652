/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on February 4, 2018, 12:57 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;




const int account_ELEMENTS = 18;
bool searchArray(int, int[account_ELEMENTS]);
/*
 * 
 */
int main(int argc, char** argv) {
     
int account[] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 
3852085, 7576651, 7881200, 4581002 };


int accNumber = 0;
	bool found = true;

	cout << "Please enter the account number: ";
	cin >> accNumber;

	if (found == searchArray(accNumber, account))
		cout << "Account number: " << accNumber << " is a valid number" << endl;
	else
		cout << "Account number: " << accNumber << " is not a valid number" << endl;

	return 0;
}

bool searchArray(int enteredValue, int lookUpArray[account_ELEMENTS] )
{
	for (int i = 0; i < account_ELEMENTS; i++)
	{
		if (enteredValue == lookUpArray[i])
			return true;
	}

	return false;
}