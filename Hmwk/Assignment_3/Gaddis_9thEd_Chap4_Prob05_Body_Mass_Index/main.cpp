/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 17, 2018, 12:13 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    double weight, height, heightsquared, bmi;
    
    cout << "what is your weight in pounds? ";
            cin >> weight;
    
    cout << "What is your height in inches? ";
    cin >> height;
    
    heightsquared =  height*height;
    bmi = (703/heightsquared)*weight;
    
    if (bmi >= 18.5 && bmi <= 25 )
    { cout << "Your BMI is at the optimal amount.";
    }
    else if (bmi < 18.5)
    {
        cout << "You are underweight.";
    }
    else if (bmi > 25)
    {
        cout << "You are overweight.";
    }
           
    
    return 0;
}

