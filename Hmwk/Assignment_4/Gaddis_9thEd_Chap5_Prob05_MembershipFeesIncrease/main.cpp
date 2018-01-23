/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 21, 2018, 5:03 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int year;
    double membership=2500;
    
    cout << "This program will show the increase of a membership every year by 4% after starting at $2,500\n"
            << "Year(s)         Membership Fee\n"
            << "*****************************\n";
            
            
           for(year = 1; year<=6; year++)
           {
               membership += (membership* (.04));
               cout << right << fixed << showpoint << setprecision(1)
		     << setw(7) << year << setw(16) << "$" << membership << endl;
           }
    

    return 0;
}

