/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 8, 2018, 10:23 PM
 */

#include <cstdlib>
#include <iostream> 

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    double  item1= 15.95,
            item2= 24.95,
            item3= 6.95,
            item4= 12.95,
            item5= 3.95,
    
    //subtotal
    
    subTotal = item1 + item2 + item3 + item4 + item5,
    
            //tax
            tax = subTotal * .07,  
    total= subTotal + tax;
    
    cout << "Subtotal= " << subTotal << endl;
    cout << "Sales Tax= " << tax << endl;
    cout << "Total= " << total << endl;
    

    
    return 0;
}

