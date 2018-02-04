/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on February 4, 2018, 12:02 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double rainFall[12];
    double total = 0;
    double avg = 0;
    double maxRain = 0;
    double minRain = 0;
    double tempRain = 0;
    
    for (int i = 0; i <12; i++)
    {
        cout << "Please enter the amount of rainfall for month: " << i+1 << ": " << endl;
        cin >> rainFall[i];
        
        if (rainFall < 0)
        {
            cout << "Please enter a number greater than 0: ";
            cin >> rainFall[i];
                    
        }
        total += rainFall[i];
        } 
    
    avg = total/12;
    maxRain = rainFall[0];
    minRain = rainFall[0];
     
    for (int i = 0; i < 12; i++)
    {
        tempRain = rainFall[i];
        if (tempRain < minRain)
            minRain = tempRain;
        if (tempRain > maxRain)
            maxRain = tempRain;
    }

    cout << "Total rainfall was: " << setprecision (2) << fixed << showpoint << total << endl;
   cout << "Average rainfall was: " << setprecision (2) << fixed << avg << endl;
   cout << "Lowest amount of rainfall was: " << setprecision (2) << fixed << showpoint << minRain << endl;
   cout << "Max amount of rain rainfall was: " << setprecision (2) << fixed << showpoint << maxRain << endl;
    
    return 0;
}

