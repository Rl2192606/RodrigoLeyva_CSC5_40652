/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 11, 2018, 8:22 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float milBdgt=639.1e09f,
          fedBdgt=4.094e12f,  
          mlPrcnt= (milBdgt/fedBdgt) * 100;
    
    
    cout << "The military budget makes up: " << mlPrcnt << "% of the Federal Budget." << endl;
    return 0;
}

