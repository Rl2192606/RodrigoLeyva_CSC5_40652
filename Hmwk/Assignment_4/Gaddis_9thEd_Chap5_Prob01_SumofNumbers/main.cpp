/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 21, 2018, 3:54 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

	int sum = 0;
	int num;

	
	cout << "Enter a positive number: ";
		cin >> num;
	for (int count = 0; count <= num; count++)
	{	
		sum = sum + num;
		count++;
	}
	if (num < 1)
		{
			cout << " The number you entered is an invalid input.";
			cout << " The program will now close. \n";
		}
	
	else

	
	cout << "\nThe sum of numbers 1 - " << num
			 << " " << "is " << sum << endl;
    return 0;
}

