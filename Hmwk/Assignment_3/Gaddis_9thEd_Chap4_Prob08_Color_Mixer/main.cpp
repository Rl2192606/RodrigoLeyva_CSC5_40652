/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 17, 2018, 1:27 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    char color[80], color2[80], red, blue, yellow;//this statement identifies 'word' as a character string


     cout << "Pick a primary color(red, blue, or yellow: ";

     cin >> color;//console input /input character string
      cout << "Pick a second primary color(red, blue, or yellow: ";

     cin >> color2;//console input /input character string
     
     if (color[80]== red )
     {
         cout << "When you mix red and blue, you get purple.";
     }
         
    return 0;
}

