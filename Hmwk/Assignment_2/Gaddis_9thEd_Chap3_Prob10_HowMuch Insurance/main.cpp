/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 11, 2018, 10:25 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    double propertyWorth;
    
    cout << "How much would it cost to replace your building? ";
    cin >> propertyWorth;
     //insruance calculation, at least 80% of the value of property
    double insuranceAmount = propertyWorth * .80;
    
    cout << "The minimum amount of insurance you should get for your property is: $" << insuranceAmount;
   
    
    
    return 0;
}

