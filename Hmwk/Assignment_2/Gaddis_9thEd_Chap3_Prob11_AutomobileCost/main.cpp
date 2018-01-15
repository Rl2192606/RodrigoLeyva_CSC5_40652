/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 11, 2018, 10:31 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    double loanPayment, insurancePayment, gas, oil, tires, maintenance;
//inputs
cout << "How much do you spend on your loan per month?";
cin >> loanPayment;
cout   << "How much do you spend on your insurance per month?";
cin >> insurancePayment;
cout   << "How much do you spend on gas per month?";
cin >> gas;
cout   << "How much do you spend on oil per month?";
cin >> oil;
cout   << "How much do you spend on tires per month?";
cin >> tires;
cout << "How much do you spend on maintenance per month?";
cin >> maintenance;

//calculations
double monthExpenses = loanPayment + insurancePayment + gas + oil + tires + maintenance,
annualExpenses = monthExpenses *12;

cout << "Monthly Expenses : $" << monthExpenses << endl;
cout << "Annual Expenses : $" << annualExpenses;
       
    
    return 0;
}

