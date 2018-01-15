/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 8, 2018, 10:13 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double rise = 1.5,
            
        fifthYear = rise * 5,
        seventhYear = rise * 7,
        tenthYear =  rise * 10;
            
    cout << "rise in 5 years: " << fifthYear << endl;
    cout << "rise in 7 years: " << seventhYear << endl;
    cout << "rise in 10 years: " << tenthYear << endl;
    return 0;
}

