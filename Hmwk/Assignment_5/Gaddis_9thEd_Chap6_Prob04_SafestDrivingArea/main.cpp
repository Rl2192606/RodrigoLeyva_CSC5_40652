/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on February 3, 2018, 10:58 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
int getNumAccidents(string);
void findLowest(int, int, int, int, int);
/*
 * 
 */
int main(int argc, char** argv) {
    
    
    int accN, accS, accE, accW, accC;
    for (int i =0; i < 5; i++)
    {
        switch(i)
        {
                case 0:  accN = getNumAccidents("N"); break;
                case 1:  accS = getNumAccidents("S"); break;
                case 2:  accE = getNumAccidents("E"); break;
                case 3:  accW = getNumAccidents("W"); break;
                default: accC = getNumAccidents("C"); break;
    }

    
    
  }  
    
    findLowest (accN, accS, accE, accW, accC);
    
    
    return 0;
    
    
}

int getNumAccidents(string region)
{
    int accidents = 0;
    cout << "Enter the number of accidents for region: " << region << " ";
    cin >> accidents;
     while (accidents < 0)
     {
         cout << "Please enter a positive number: "; 
         cin >> accidents;
     }
    return accidents;
}


void findLowest(int r1, int r2, int r3, int r4, int r5)
{
 
        int lowest = 0;
        string region = "";
        
        if (r1 < r2 && r1 < r3 && r1 < r4 && r1 < r5)
        {
            lowest = r1;
            region = "North";
        }
        else if (r2 < r1 && r2 < r3 && r2 < r4 && r2 < r5)
        {
            lowest = r2;
            region = "South";
        }
        else if (r3 < r1 && r3 < r2 && r3 < r4 && r3 < r5)
        {
            lowest = r3;
            region = "East";
        }
        else if (r4 < r2 && r4 < r3 && r4 < r1 && r4 < r5)
        {
            lowest = r4;
            region = "North";
        }
        else
        {
            lowest = r5;
            region = "Central";
        }
        
        cout << "The region with the lowest amount of accidents is " << region << ". Total number of accidents there are: " << lowest;
                
   
}