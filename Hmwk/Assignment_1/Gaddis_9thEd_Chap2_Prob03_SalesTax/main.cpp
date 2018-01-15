    /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 8, 2018, 8:51 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double StateSalesTax = .04*95, 
            
     CountySalesTax = .02*95,
            
     TotalSalesTax = StateSalesTax + CountySalesTax;
    
  cout << "Purchase total: $95" << endl;
cout << "State Sales Tax: 4 percent" << endl;
cout << "County Sales Tax: 2 percent" << endl;

cout << "The total sales tax for our purchase will be: $" << TotalSalesTax << endl;

    return 0;
}

