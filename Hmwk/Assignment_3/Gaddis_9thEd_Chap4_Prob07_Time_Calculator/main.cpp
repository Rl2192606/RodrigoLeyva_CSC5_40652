/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 17, 2018, 12:36 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double seconds, hours, minutes, days;

    cout << "Enter how many seconds you want to calculate(Larger than 60): ";
    cin >> seconds;
    
    minutes = seconds/60;
    hours = seconds/3600;
    
    if (seconds >= 60)
    {
        
        
        cout << fixed << setprecision(2);
        cout << "The number of minutes in " << seconds << "seconds, is: " << minutes << endl;
                
    }
    else if (seconds>3600)
    {
        
        cout << fixed << setprecision(2);
        cout << "The number of hours in " << seconds;
    }
    return 0;
}

