/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 16, 2018, 11:26 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int choice;
    cout << "Enter a number between 1-10: ";
    cin >> choice;
    
    switch (choice)
    {
        case 1: cout << "Roman number for 1: I ";
        break;
        
        case 2: cout << "Roman number for 2: II ";
        break;
        case 3: cout << "Roman number for 3: III ";
        break;
       
        case 4: cout << "Roman number for 4: IV ";
        break;
        case 5: cout << "Roman number for 5: V ";
        break;
        case 6: cout << "Roman number for 6: VI ";
        break;
       
        case 7: cout << "Roman number for 7: VII ";
        break;
        case 8: cout << "Roman number for 8: VIII ";
        break;
        case 9: cout << "Roman number for 9: IX ";
        break;
        case 10: cout << "Roman number for 10: X ";
        break;
        
              
    }

    return 0;
}

