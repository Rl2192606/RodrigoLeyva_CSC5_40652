/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 22, 2018, 9:34 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int days;
    double penny = 1;
    double totalPenny;
    double totalDollar;
    double totalDays;
     
    cout << "How many days did you work? ";
    cin >> days;
    totalDays = days;
    cout << "This shows how much money you would earn if you earned one penny a day, followed by doubling it every day.\n"
		
		 << "    Day(s)        Salary\n"
		 
		 << "*****************************\n";
           
    for(days = 1; days <= totalDays; days++)
	{
		penny *= 2;
		cout << right << fixed << showpoint << setprecision(1)
		     << setw(7) << days << setw(16) << penny << endl;
	}
    
    return 0;
}

