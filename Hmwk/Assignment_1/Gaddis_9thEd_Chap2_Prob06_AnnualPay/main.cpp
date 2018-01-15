/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 8, 2018, 10:08 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int payAmount = 2200.0,
    payPeriods = 26,
    annualPay = payPeriods * payAmount;
    
    cout << "Total Annual Pay: $" << annualPay;
    
    

    return 0;
}

