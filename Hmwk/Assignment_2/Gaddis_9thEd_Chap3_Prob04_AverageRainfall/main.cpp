/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 11, 2018, 9:13 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double rainJune, rainJuly, rainAugust, totalRain, averageRain;
    
    cout << "How many inches of rain fell in June? ";
    cin >> rainJune;
    cout << "How many inches of rain fell in July? ";
    cin >> rainJuly;
    cout << "How many inches of rain fell in August? ";
    cin >> rainAugust;
    
    totalRain = rainJune + rainJuly + rainAugust;
    averageRain = totalRain / 3;
    
    cout << setprecision(2) << fixed;
    cout << "Your average rainfall for June, July, and August is: " << averageRain << " inches.";
    

    return 0;
}

