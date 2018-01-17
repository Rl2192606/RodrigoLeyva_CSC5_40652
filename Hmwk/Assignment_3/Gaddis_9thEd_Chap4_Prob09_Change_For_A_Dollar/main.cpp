/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 17, 2018, 1:07 AM
 */


#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double pennies, nickels, dimes, quarters, total;
    
    cout << "How many of each coins will you need to make a dollar." << endl;
    cout << "How many pennies do you have? ";
            cin >> pennies;
            cout << "How many nickels do you have? ";
            cin >> nickels;
            cout << "How many dimes do you have? ";
            cin >> dimes;
            cout << "How many quarters do you have? ";
                    cin >> quarters;
            
            total = (pennies * .01) + (nickels * .05) + (dimes * .10) + (quarters * .25);
            
           if (total == 1)
           {
     cout << "Your coins add up to one dollar, you won!";
           }
    else if (total < 1)
    {
        cout << "Sorry, you have less than one dollar.";
    }
    else if (total > 1)
    {
        cout << "Sorry, you have more than one dollar.";
    }
    return 0;
}

