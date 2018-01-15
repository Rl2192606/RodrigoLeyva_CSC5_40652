/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 11, 2018, 10:13 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double cookieAmount;
    
    cout << "How many cookies were consumed? ";
    cin >> cookieAmount;
    //100 calories in each cookie
    double calories = 100* cookieAmount;
    
    cout << "Total calories consumed: " << calories << endl;
           
           

    return 0;
}

