/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 8, 2018, 10:44 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int acre= 43560,
            land= 391876,
    
    totalacres= land / acre;

    cout << "Total number of acres in the tract of land is: " << totalacres << endl;
           
    return 0;
}

