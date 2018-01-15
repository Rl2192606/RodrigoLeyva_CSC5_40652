/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 11, 2018, 10:00 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double fullWeight, palletWeight;
    
    cout << "How much does the pallet weigh? ";
    cin >> palletWeight;
    cout << "How much does the pallet weigh with the widgets stacked on top of it? ";
    cin >>fullWeight;
    
    double widgetWeight= fullWeight - palletWeight,
            widgetQuantity = widgetWeight / 12.5;
    cout << "Number of widgets stacked on top of pallet: " << widgetQuantity;
           
          

    return 0;
}

