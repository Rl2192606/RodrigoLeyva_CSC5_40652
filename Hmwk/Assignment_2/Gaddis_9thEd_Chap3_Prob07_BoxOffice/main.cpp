/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 11, 2018, 9:34 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    string movieName;
    double ticketsAdult, ticketsChild;

    cout << "What movie did you see? ";
    cin >> movieName;
    cout << "How many Adult tickets were sold? ";
    cin >> ticketsAdult;
    cout << "How many child tickets were sold? ";
    cin >> ticketsChild;
    
    double priceAdult =  10,
            priceChild = 6,
            
            gross = (ticketsAdult * 10) +
                    (ticketsChild * 6),
            net = gross * .20,
    distributorTake = gross - net;
    
    
    cout << "Movie Name: " << movieName << endl;
    cout << "Adult Tickets sold: " << ticketsAdult << endl;
    cout << "Child Tickets sold: " << ticketsChild << endl;
    cout  << "Gross Box Office Profits: $ " << gross << endl;
    cout << "Net Box Office Profits: $ " << net << endl;
    cout << "Amount paid to distributor: $ " << distributorTake << endl;
           
           
    
            
         
    return 0;
}

