/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 22, 2018, 8:55 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int hours;
    double mph;
    double distance;
    double speed;
    cout << "How fast (mph) where you traveling?\n";
    cin >> mph;
    cout << "How many hours did you travel?\n";        
    cin >> hours;       
            
    distance = hours;
    speed = mph;
       cout <<"Hour(s)         Distance\n"
            << "*****************************\n";
            
            
           for(hours = 1; hours<=distance; hours++)
           {
               mph += speed;
               cout << right << fixed << showpoint << setprecision(1)
		     << setw(7) << hours << setw(16) << mph << " Miles" << endl;
           }
    

    return 0;
}

