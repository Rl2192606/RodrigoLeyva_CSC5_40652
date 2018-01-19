/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 18, 2018, 9:29 PM
 */
// PAYCHECK PROGRAM
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
 
    double payRate, hrsWrkd, payChck, overTimePay, overPayChck; 
    
    //pay rate = $25.00
    cout <<"What is your pay rate?" << endl;
    cin >> payRate;     
    
    cout << "How many hours did you work this week?" << endl;
    cin >> hrsWrkd;
    //math section
    payChck = hrsWrkd*payRate;
            
    if(hrsWrkd<=40)
    
        cout << "Your Pay is: " << payChck;
    
    else
        if(hrsWrkd>40)
            cout << "Your payhcheck with overtime is: " << ((((hrsWrkd-40)*payRate)*1.5)+ (payRate*40)) << endl;
            
            
    return 0;
}

