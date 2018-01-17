/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 16, 2018, 11:21 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double number1, number2;
    
    cout << "Enter a number: ";
    cin >> number1;
    cout << "Enter a second number: ";
    cin >> number2;
    
    if (number1 > number2) 
    cout << number1;
    if (number2 > number1)
        cout << "The bigger number of the two that you entered was: " << number2;
            

    return 0;
}

