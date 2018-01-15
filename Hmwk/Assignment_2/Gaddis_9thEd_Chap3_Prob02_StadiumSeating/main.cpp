/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 11, 2018, 8:56 AM
 */


#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double classATicket = 15; 
     double classBTicket = 12; 
    double classCTicket = 9;
            
            int amountA; 
            int amountB; 
            int amountC;
            double sales = (classATicket * amountA) +
                            (classBTicket * amountB) +
                            (classCTicket * amountC);
    cout << "How many Class A tickets were purchased?";
    cin >> amountA;
    cout << "How many Class B tickets were purchased?";
    cin >> amountB;
    cout << "How many Class C tickets were purchased?";
    cin >> amountC;
           
 cout << "Total Amount of income generated through ticket sales: $" << sales; 

    return 0;
}

