/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 10, 2018, 8:35 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

 
/*
 * 
 */
int main(int argc, char** argv) {
    
    double 
//taxes
fexTAX = .184,
stateTax = .417,
stateTaxPercent = .0225,
gallonGas = 3.98,
stateSaleTax = gallonGas * .0225,
            totalTax = fexTAX + stateTax + stateSaleTax,
baseGallonGas = gallonGas - totalTax,
    priceDifference = gallonGas - baseGallonGas,
            prePercent = priceDifference / gallonGas,
            percent = prePercent * 100;




cout << "Total Tax on a gallon of gas: $" << totalTax << " cents " << endl;
cout << "Base Price of gas: " << baseGallonGas << endl;
cout << "Final Gas Price: " << gallonGas << endl;
cout << "Percent Price increase due to tax: " << percent <<  "%" << endl;
    return 0;
}

