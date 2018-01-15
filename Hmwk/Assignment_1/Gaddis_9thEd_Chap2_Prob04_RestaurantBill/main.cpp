/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 8, 2018, 9:34 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double MealCharge = 88.67,
            tax = .0675 * MealCharge,
            MealPlusTax = MealCharge + tax,
            tip = MealPlusTax * .20,
            MealPlusTip = MealPlusTax + tip;
  
    cout << "Meal Total Before Tax:$" << MealCharge << endl;
    cout << "Meal After Tax:$" << MealPlusTax << endl;
    cout << "Tax Amount:$" << tax << endl;
    cout << "Tip:$" << tip << endl;
    cout << "Total Bill:$" << MealPlusTip << endl;
    return 0;
}

