/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 11, 2018, 8:58 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //test scores
    double testAScore, testBScore, testCScore, testDScore, testEScore, total, average;
    
    //get scores for each day
    cout << "Enter your score for test A: ";
    cin >> testAScore;
    cout << "Enter your score for test B: ";
    cin >> testBScore;
    cout << "Enter your score for test C: ";
    cin >> testCScore;
    cout << "Enter your score for test D: ";
    cin >> testDScore;
    cout << "Enter your score for test E: ";
    cin >> testEScore;
    //calculate average
    total = testAScore + testBScore + testCScore + testDScore+ testEScore;
    average = total / 5;
    
    //output with two decimal points accuracy
    cout << setprecision(2) << fixed;
   
    cout << "Your average test score is: " << average; 

    return 0;
}

