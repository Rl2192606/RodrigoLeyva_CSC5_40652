/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 17, 2018, 12:00 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double month, day, year, totalyear;
    
    cout << "Enter your two digit birth month: ";
            cin >> month;
    cout << "Enter the day you were born: ";
            cin >> day;
    cout << "Enter your two digit birth year: ";
    cin >> year;
    
    totalyear= month * day;
    
    if (totalyear==year)
    { cout << "Your birth date is magic!";
    }
    else if (totalyear != year) 
    {
        cout << "your birth date is not magic.";
    }
            
           
    
    return 0;
}

