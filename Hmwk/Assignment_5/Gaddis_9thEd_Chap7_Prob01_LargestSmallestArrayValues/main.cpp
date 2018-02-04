/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on February 3, 2018, 11:50 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int numbers[10];
    int smallest = 0;
    int largest = 0;
    int temp = 0;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Please enter number " << i +1 << ": " << endl;
        cin >> numbers[i];
                
    }

    smallest = numbers[0];
    largest = numbers[0];
    
    for (int i = 1; i < 10; i++)
    {
        temp = numbers[i];
        if (temp < smallest)
            smallest = temp;
      if (temp > largest)
          largest = temp;
    }
    
    cout << "The largest number in your set is: " << largest << endl;
    cout << "The smallest number in your set is: " << smallest << endl;
            
    return 0;
}

