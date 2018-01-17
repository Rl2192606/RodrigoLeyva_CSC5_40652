/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 17, 2018, 12:25 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double weight, mass;
    
    cout << "What is the mass of the object? ";
            cin >> mass;
    
    
    
    
    weight = mass*9.8;
    
    cout << "Object's total weight: " << weight << " newtons." << endl;
    
           
    
    if (weight > 1000)
    { cout << "Your object is over 1000 newtons and is too heavy.";
    }
    else if (weight < 10)
    {
        cout << "Your object is over 10 newtons and is too light.";
    }
   
    return 0;
}

