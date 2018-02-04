/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on February 3, 2018, 9:34 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
double getSales(string);
void findHighest(double, double, double, double);
/*
 * 
 */
int main(int argc, char** argv) 
{
    double northEastSales, northWestSales, southEastSales, southWestSales;
    for (int i = 0; i < 4; i++)
    {
        switch(i)
        {
            case 0: northEastSales = getSales("NorthEast"); break;
            case 1: northWestSales = getSales("NorthWest"); break;
            case 2: southEastSales = getSales("SouthEast"); break;
            default: southWestSales = getSales("SouthWest"); break;
        }
        
    }
    findHighest(double northEastSales, double northWestSales, double southEastSales, double southWestSales);
}

 double getSales(string name)
 {
     double sales = 0;
     cout << "Enter the total sales for division: " << name << "$: "; 
     cin >> sales;
     
     while (sales < 0)
     { cout << "Please enter a positive number, $: ";
     cin >> sales;
     }
     return sales;
     
 }   
   void findHighest(double northEastSales, double northWestSales, double southEastSales, double southWestSales)
   {
       double highest = 0;
       string division;
       if (northEastSales > southEastSales && northEastSales > northWestSales && southEastSales > southWestSales)
       {
           highest = northEastSales;
           division = "North East";
          
       }
       else if (southEastSales > northEastSales &&  southEastSales > northWestSales && southEastSales > southWestSales)
       {
           highest = southEastSales;
           division = "South East";
          
       }
       else if (northWestSales > northEastSales && northWestSales > southEastSales && northWestSales > southWestSales)
       {
           highest = northWestSales;
           division = "North West";
          
       }
       else 
       {
           highest = southWestSales;
           division = "North West";
       }
       cout << "The division with the most sales is: " << division << ". Their total sales are: $" << highest;
               
   }         
 

 


