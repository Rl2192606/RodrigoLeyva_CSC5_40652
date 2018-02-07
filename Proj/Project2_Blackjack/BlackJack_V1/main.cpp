/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rodrigo
 *
 * Created on February 6, 2018, 10:37 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
void Shuffle(bool Deck[]);
void ShowCard(int Card);
void ShowHand(int Hand[], const int CardCount);
int DealCard(bool Deck[]);
int ScoreHand(int Hand[], const int CardCount);
void Score(int DealerHand[], const int DealerTotal, int PlayerHand[], const int PlayerTotal);

int main() {
	using namespace std;
	// random generators
	time_t qTime;
	time(&qTime);
	srand(qTime);

	bool Deck[52];
	int iDealerTotal = 0;
	int DealerHand[12];
	int iPlayerTotal = 0;
	int PlayerHand[12];

	// loop for the start of a hand
	while (true) {
		// shuffle deck to even the chance for each card
		Shuffle(Deck);
		// deal cards to dealer and player, each receives two cards.
		PlayerHand[0]		= DealCard(Deck);
                
		DealerHand[0]		= DealCard(Deck);
                
		PlayerHand[1]		= DealCard(Deck);
                
		DealerHand[1]		= DealCard(Deck);
                
		iDealerTotal		= 2;
		iPlayerTotal	= 2;

		// welcome sign with table rules and signals a new hand being dealt
		cout << "*****************Welcome to Blackjack!******************" << endl;
		cout << "           Dealer must stand on 17 and draw to 16       " << endl;
		cout << "***********************Good Luck!***********************" << endl;
                cout << "********************************************************" << endl;
		cout << "              Dealer has dealt a new hand!              " << endl;
		cout << "********************************************************" << endl;

    return 0;
}

