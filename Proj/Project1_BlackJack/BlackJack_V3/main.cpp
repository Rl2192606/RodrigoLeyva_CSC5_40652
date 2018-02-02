/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on January 28, 2018, 2:09 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //hearts, diamonds, spades, clubs.
    srand (time (0));
    int dealerCard_1; //dealer's first card
    int dealerCard_2; //dealer's second card
    int playerCard_1 = rand() % 10 + 1; //player's first card
    int playerCard_2 = rand() % 10 + 1; //player's second card
    int playerCard_3 = rand() % 10 + 1; //player's third card
    int playerCard_4 = rand() % 10 + 1;//player's fourth card
    int firstHitTotal = playerCard_1 + playerCard_2 + playerCard_3; //total score after cards dealt
    int secondHitTotal = playerCard_1 + playerCard_2 + playerCard_3 + playerCard_4; //total score after cards dealt
    int dealerHand; //the dealer's total hand
    int playerHand = playerCard_1 + playerCard_2;  //the player's total hand
     //drawing of card to activate switch cases
    int newCard = rand() % 10 + 1; //value of the new card being drawn
    string playerName; //player's name from input
    char playerChoice; //possible player choices
    char playerHitStand;  //choosing between hitting or standing after cards dealt
    char result;
    
    
    
    //start of game
                cout << "--------------------Welcome to Rodrigo's Casino!!--------------------" << endl;
		cout << "-----------------------The game is Blackjack!------------------------" << endl;
		cout << "------------------------Dealer stands on 17 -------------------------" << endl;
                cout << "------------------------------HAVE FUN ------------------------------\n" << endl;
              
                
    cout << "Enter the player's name: " << endl; //prompt user to enter your name
    cin >> playerName; //input for playerName string
    cout << "\n " << endl; //empty line
    
    while (playerChoice != 'n' && playerChoice != 'q')
    { 
        cout << "Hello " << playerName << "!" << " Enter 'n' for a new hand, or 'q' to quit: " << endl;
    cin >> playerChoice;
    if(playerChoice != 'n' && playerChoice != 'q')
    { cout << "Input Error, please try again. " << endl; //loops while to make sure player enter correct inputs
    
    }
    }
   
   
   //start of a new hand

while (true){	
    
   
    
   if (playerChoice == 'n') //new hand starter
    {
        
        cout << " ========================================================" << endl;
		cout << " ------                New Hand!                   ------" << endl;
		cout << " ======================Good Luck=========================\n" << endl;
                
                
                
                        cout << "Dealer's Hand" << endl;
			cout << "? "
                        << newCard << endl;
                        cout << endl;
			cout << "Player's Hand *** Current Hand Value = " << playerHand << endl;
                        cout <<   playerCard_1 << " " << playerCard_2; //shows the player's two cards
                        cout << "\n";
                        
                        while (playerHand <= 21)
                        {
                            
                        cout << "Hit(h) or stay(s): "; //prompts user to pick between hitting and standing
                        cin >> playerHitStand;
                        
                    
                      
                        if (playerHitStand == 'h') { //user has chosen to hit, dealers gives him a third card
                                
                                cout << "Dealer's Hand" << endl;
			cout << "? "
                        << newCard << endl;
                        cout << endl;
			cout << "Player's Hand *** Current Hand Value = " << firstHitTotal << endl;
                        cout <<   playerCard_1 << " " << playerCard_2 << " " << playerCard_3; //running total of total hand
                        cout << "\n"; }
                        
                        
                        while (firstHitTotal <= 21)
                        {
                        cout << "Hit(h) or stay(s): ";
                        cin >> playerHitStand;
                        
                         if (playerHitStand == 'h') { //user input validation
                                
                                cout << "Dealer's Hand" << endl;
			cout << "? "
                        << newCard << endl;
                        cout << endl;
			cout << "Player's Hand *** Current Hand Value = " << secondHitTotal << endl;
                        cout <<   playerCard_1 << " " << playerCard_2 << " " << playerCard_3 << " " << playerCard_4; 
                        cout << "\n"; }
                        
			}
                        if (playerHand > 21)
                        {
                            cout << "Bust! You went over 21! Game over!";
                        }
			 else if (playerHitStand == 's') {
				
			} else {
				cout << "Error: Try Again!" << endl; //user input validation
                                cout << "Hit(h) or stay(s): ";
                                cin >> playerHitStand;
			}
    }      
   }
}
    if (playerChoice == 'q')
    {
        cout << "GAME OVER, THANK YOU FOR PLAYING";
    }
  /*/ 
    switch (result)
    {
        case 'win':
            cout << "You beat the dealer!";
    }
        case 'bust':
        {
            cout << "You went over 21! Bust! Gameover.";
        }
        case 'houseBust':
        {
            cout << "The dealer went over 21! You win.";
        }
        
        case 'loss':
        {
            cout << "The dealer got a higher score than you! Gameover.";
        }
   * /*/
    return 0;

}
