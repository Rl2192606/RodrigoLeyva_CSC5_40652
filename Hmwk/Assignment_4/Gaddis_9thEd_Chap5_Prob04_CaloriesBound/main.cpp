/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 21, 2018, 4:49 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int minute;
    double calories;
    
    cout << "This program will show how many calories you burn every 5 minutes.\n"
         << "Minute(s)         Calories Burned\n"
         << "*****************************\n";
         
         for(minute = 5; minute<=30; minute+=5)
         { 
             calories += 3.6;
		cout << right << fixed << showpoint << setprecision(1)
		     << setw(7) << minute << setw(16) << calories << endl;
         }
    return 0;
}

