/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on February 3, 2018, 11:32 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
double fallingDistance(int = 0);
/*
 * 
 */
int main(int argc, char** argv) {
    
    int t= 0;
    double distance = 0;
    
    cout << "This program will calculate the distance an object will fall in ten seconds:" << endl;
    for (int i = 1; i <= 10; i++)
    {
        distance = fallingDistance(i);
        cout << i << " seconds: " << distance << " meters" << endl;
                
    }

    return 0;
}

double fallingDistance(int t)
{
    double distance = 0;
    const double g = 9.8;
    distance = (0.5 * g) * (pow(t, 2));
    return distance;
}
