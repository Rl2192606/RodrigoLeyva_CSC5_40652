/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 16, 2018, 11:42 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double length1, length2, width1, width2, area1, area2;
    
    cout << "Enter the length of the first triangle: ";
    cin >> length1;
    cout << "Enter the width of the first triangle: ";
    cin >> width1;
    area1 = length1*width1;
    cout << "The area of the first triangle is: " << area1 << endl;
    
   
            
    cout << "Enter the length of the second triangle: ";
    cin >> length2;
    cout << "Enter the width of the second triangle: ";
    cin >> width2;
    area2 = length2*width2;
    cout << "The area of the second triangle is: " << area2 << endl;
    
    //if statements to see which has the larger area
    if (area1 > area2)
    { cout << "The first triangle has the larger area." << endl;
    }
    else if(area2> area1)
    {  cout << "The second triangle has the larger area.";
    }
    else   if(area1 = area2)
        cout << "Both triangles have the same area. ";
               
               

    return 0;
}

