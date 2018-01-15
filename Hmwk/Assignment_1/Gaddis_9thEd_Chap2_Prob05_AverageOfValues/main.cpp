/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 8, 2018, 9:54 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double     sum,
            average,
    
            number1= 28,
            number2= 32,
            number3= 37,
            number4= 24,
            number5= 33;
    
    sum = number1 + number2 + number3 + number4 + number5;
    
    average = sum / 5;
    
    cout << "Average=" << average << endl;
  
            

    return 0;
}

