/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 22, 2018, 10:29 PM
 */


#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int numberYears = 0;
    const int month = 12;
    float rainfall = 0.0f;
    float avgRain = 0.0f;
    float totalRainfall = 0.0f;
    cout << "Enter the number of years: " << endl;
    cin >> numberYears;
    
    while (numberYears < 1)
    {
        cout << "Number of years must be greater than 1. Enter another number: ";
        cin >> numberYears;
    }
    
    for (int i = 1 ; i <=numberYears; i++)
    {
        for (int months= 1; months <=month; months++)
        {
            cout << "Please enter the rainfall for " << months << "month: ";
            cin >> rainfall;
            
            
            while (rainfall < 0)
            {
                cout << "The rainfall amount can't be negative number, please try again: ";
                cin >> rainfall;
                        
            
          }
            totalRainfall +=rainfall;
            
        }
    }
        
    cout << "\nTotal Number of months: " << numberYears * month << endl;
    cout << "Total amount of rainfall: " << setprecision(2) << fixed << totalRainfall << "inches" << endl;
    cout << "Average Rainfall for the whole project: " << setprecision(2) << fixed << totalRainfall / (numberYears * month) << "inches";
           
        
    
    

    return 0;
}

