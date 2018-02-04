/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on February 4, 2018, 12:26 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int getSalesData(string [], int []);
int posOfLargest(int []);
int posOfSmallest(int []);
void displayReport(string [], int [], int);
const int SIZE = 5;

/*
 * 
 */
int main(int argc, char** argv) {
    
    string name[SIZE] = ("mild ", "medium ", "sweet ", "hot ", "zesty ");
    int sales[SIZE];
    
    int totalJarsSold = getSalesData(name, sales);
    displayReport(name, sales, totalJarsSold);
    
    
    

  return 0;
}

int getSalesData(string name[], int sales[])
{
    int total = 0;
    for (int type = 0; type < SIZE; type++)
    {
        cout << "Amount of Jars sold last money of : " << name[type] << ": ";
        cin >> sales[type];
     }   
    
    total += sales[type];

