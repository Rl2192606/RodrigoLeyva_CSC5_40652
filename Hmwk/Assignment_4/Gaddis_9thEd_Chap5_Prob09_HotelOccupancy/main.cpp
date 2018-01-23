/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 22, 2018, 10:07 PM
 */


#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
int floors;
int rooms;
int occupied;
int open;
int totalRooms;
int totalOccupied;
double percentOccupied;
/*
 * 
 */
int main(int argc, char** argv) {
    
    cout << "How many floors are in the hotel? ";
            cin >> floors;
    
    while (floors < 1)
    {
        cout << "The number of floors must be at least 1 or great, try again. ";
        cin >> floors;
    }
        
for( int i = 1; i <=floors; i++)
{
    cout << "How many rooms are there per floor?";
            cin >> rooms;
            
           while (rooms < 3)
            {
                cout << "Number of rooms on floor must be at least 10. ";
                cin >> rooms;
            } 
            
            cout << "How many rooms are occupied? ";
            cin >> occupied;
            
            totalRooms += rooms;
        totalOccupied += occupied;
            
}
            
            percentOccupied = ((totalOccupied / totalRooms)*(100));


    cout << "The hotel has total of " << floors << " floors\n";
    cout << "The hotel has total of " << totalRooms << " rooms\n";
    cout << "There are " << totalOccupied << " rooms occupied\n";
    cout << "There are " << totalRooms - totalOccupied << " empty rooms\n";
    cout << "Percentage of occupied rooms is " << setprecision(2) << percentOccupied << "%\n";
    
    return 0;
}

