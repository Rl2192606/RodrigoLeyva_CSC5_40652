/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 11, 2018, 8:48 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int gallons, tankMpg, mpg;
    
    cout << "How many gallons of fuel can your vehicle hold? ";
    cin >> gallons;
    cout << "How many miles can your vehicle travel on a full tank of gas? ";
    cin >> tankMpg;
    mpg = tankMpg / gallons;
    cout << "MPG: " << mpg << endl;

    return 0;
}

