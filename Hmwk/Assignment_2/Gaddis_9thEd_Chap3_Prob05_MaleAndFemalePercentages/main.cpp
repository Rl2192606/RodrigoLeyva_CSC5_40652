/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 11, 2018, 9:20 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double amountMales, amountFemales, totalPeople, percentMales, percentFemales;
    //inputs
    cout << "Enter the number of males: ";
    cin >> amountMales;
    
    cout << "Enter the number of Females: ";
    cin >> amountFemales;
    
    //calculations
    totalPeople = amountMales + amountFemales;
    percentMales = (amountMales / totalPeople) * 100;
    percentFemales = (amountFemales / totalPeople) * 100;
            
    cout << "Percent of Males: " << percentMales << "%." << endl;
    cout << "Percent of Females: " << percentFemales<< "%." << endl;
       
    return 0;
}

