/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 21, 2018, 4:19 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char letter;
    
    cout << "This program will show the characters for ASCII codes 0-127.";
    letter = 0;
    for (int count = 0; count <= 127; count++)
    {
       if (count % 16 ==0)
           		cout << endl; 
		   
		        cout << letter << "  ";
			letter++;
    }
    return 0;
}

