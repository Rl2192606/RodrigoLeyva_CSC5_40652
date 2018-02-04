/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on February 2, 2018, 11:12 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail(double, double);


/*
 * 
 */
int main(int argc, char** argv) {
    double price= 0;
    double markup= 0;
    double totalPrice;
    cout << "Hello, please enter the wholesale price of the item, " << endl; 
    cout     <<   "followed by markup percentage. " << endl;
         cin >> price >> markup;
         while (price < 0|| markup < 0)
         {
             cout << "Error, please enter a non negative price wholesale price of the item, " <<  
            "followed by markup percentage. " << endl;
                      cin >> price >> markup;
         }
             
             
             // call{ function
         totalPrice = calculateRetail(price, markup);
         cout << "The total price is: $" << fixed << setprecision(2) << totalPrice;
         
         
 return 0;
}

double calculateRetail(double price, double percent)
{
    double totalPrice;
    totalPrice = ((price/100) * percent) + price;
    return totalPrice;
}
