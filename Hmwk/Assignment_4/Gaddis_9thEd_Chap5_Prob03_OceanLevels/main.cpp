/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 21, 2018, 4:28 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
  int Year;
	double Rise = 0.0;

	cout << "This shows how many millimeters the ocean will rise by every year\n"
		
		 << "    Year(s)        Millimeters Risen\n"
		 
		 << "*****************************\n";

	for(Year = 1; Year <= 25; Year++)
	{
		Rise += 1.5;
		cout << right << fixed << showpoint << setprecision(1)
		     << setw(7) << Year << setw(16) << Rise << endl;
	}

    return 0;
}

