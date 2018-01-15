/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 8, 2018, 10:35 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double gasTank= 20,
    highwayMiles= 28.9,
            streetMiles= 23.5,
            
            totalHighway= gasTank * highwayMiles,
            totalStreet= gasTank * streetMiles;
    
    cout << "Total possible miles on Street with 1 tank= " << totalStreet << endl;
    cout << "Total possible miles on Highway with 1 tank= " << totalHighway << endl;       

    return 0;
}

