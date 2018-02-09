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

// BLACKJACK GAME

#include <cstdlib> //random value library
#include <iostream> //input and output stream
#include <ctime> // unique seed library
#include <iomanip> // formatting library
#include <string> //string library
void Shuffle(bool Deck[]); //prototype functions

void ShowCard(int Card); //displays card
void ShowHand(int Hand[], const int CardCount); //shows hand
int DealCard(bool Deck[]); //random card is dealt from the deck
int ScoreHand(int Hand[], const int CardCount); //adds up hands
void Score(int DealerHand[], const int DealerTotal, int PlayerHand[], const int PlayerTotal); //adds up totals

int main(int argc, char** argv) 
{
	using namespace std;
	// random generators
	time_t qTime;
	time(&qTime);
	srand(qTime);

	bool Deck[52]; //our 52 card deck
	int iDealerTotal = 0; //the total score of dealer's cards
	int DealerHand[12]; //the hand dealt to dealer
	int iPlayerTotal = 0; //player's total hand
	int PlayerHand[12]; //player's dealt hand

	// loop for the start of a hand
	while (true) {
		// shuffle deck to even the chance for each card
		Shuffle(Deck);
		// deal cards to dealer and player, each receives two cards.
		PlayerHand[0]= DealCard(Deck); //first player card
                
		DealerHand[0]= DealCard(Deck); //first dealer card (hidden)
                
		PlayerHand[1]	= DealCard(Deck); //second player card
                
		DealerHand[1]= DealCard(Deck); //second dealer card
                
		iDealerTotal		= 2;
		iPlayerTotal	= 2;

		// welcome sign with table rules and signals a new hand being dealt
		cout << "*****************Welcome to Blackjack!******************" << endl;
		cout << "           Dealer must stand on 17 and draw to 16       " << endl; //gives basic rule of dealer rule
		cout << "***********************Good Luck!***********************" << endl;
                cout << "********************************************************" << endl;
		cout << "              Dealer has dealt a new hand!              " << endl; //shows message to signal new hand
		cout << "********************************************************" << endl;
char PlayerChoice;
		bool PlayerHits	= true;
		int PlayerScore	= ScoreHand(PlayerHand, iPlayerTotal);
		// calculate total score for each hand, including after each hit
		do 
                {
			// shoe dealer's and player's hand. only show one of the dealer's card per blackjac rules
			cout << "Dealer's Hand: " << endl;
			cout << "?  "; //showing that the dealer has one face down card
			ShowCard(DealerHand[1]);
			cout << endl;
			cout << "Player's Hand: Score = " << ScoreHand(PlayerHand, iPlayerTotal) << endl; //shows the total score of the player's cards
			ShowHand(PlayerHand, iPlayerTotal); //show player cards

			// ask player if they want to hit or stay with their dealt cards.
			cout << "Do you: Hit(h) or stay(s): ";
			cin >> PlayerChoice;
			if (PlayerChoice == 'h') //player chooses between hit and stay
                        {
				PlayerHand[iPlayerTotal] = DealCard(Deck);
				++iPlayerTotal;
			} 
                        else if (PlayerChoice == 's') //player decided to stand 
                        {
				PlayerHits = false;
			} 
                        else //inpout validation. makes sure that the player chose a valid input, otherwise loops again
                        {
				cout << "Error: Please pick a valid choice" << endl;
			}
			cout << endl;
			// add player's card to update total and checks to make sure player hasn't gone over 21.
			PlayerScore	= ScoreHand(PlayerHand, iPlayerTotal);
		} 
                
                while (PlayerHits && PlayerScore < 22);

		// check if player has busted after hits, if player has the dealer wins.
		if (PlayerScore > 21) 
                {
			// player went over 21, dealer won. 
			cout << "// The Dealer Wins!!! \\" << endl;
			Score(DealerHand, iDealerTotal, PlayerHand, iPlayerTotal);
		} 
                else 
                {
			// dealer has to reach 17 per blackjack rules. checks if dealer has 17, if not, dealer hits.
			int iDealerScore		= ScoreHand(DealerHand, iDealerTotal);
			while (iDealerScore < 17) {
				DealerHand[iDealerTotal] = DealCard(Deck);
				++iDealerTotal;
				iDealerScore		= ScoreHand(DealerHand, iDealerTotal);
			}
			bool HouseBust	= (iDealerScore > 21); //activates if dealer goes over 21
			if (HouseBust) 
                        {
				// Dealer has gone over 21 and busted, player wins.
				cout << "$$ The Player Wins!!! $$" << endl;
				Score(DealerHand, iDealerTotal, PlayerHand, iPlayerTotal);
			} 
                        else 
                        {
				// if no one busts, compare scores to see who has the higher score
				if (PlayerScore == iDealerScore) {
					// player and dealer have same score, ends in a "push/tie"
					cout << "**** TIE! ****" << endl;
					Score(DealerHand, iDealerTotal, PlayerHand, iPlayerTotal);
				} else if (PlayerScore > iDealerScore) {
					// "The Player wins" output message
					cout << "$$ The Player Wins!!! $$" << endl;
					Score(DealerHand, iDealerTotal, PlayerHand, iPlayerTotal);
				} else {
					// "The dealer wins" output message
					cout << "// The House Wins!!! \\" << endl;
					Score(DealerHand, iDealerTotal, PlayerHand, iPlayerTotal);
				}
			}
		}
	}
	return EXIT_SUCCESS;
}

void Shuffle(bool Deck[]) { //shuffles deck
	for (int iIndex = 0; iIndex < 52; ++iIndex) 
        {
		Deck[iIndex] = false;
	}
}

void ShowCard(int Card) { //calculates score for face cards. "jack, queen, king, ace"
	using namespace std;
	// calculations for each face card
	const int CardRank = (Card % 13);
	if (CardRank == 0) 
        {
		cout << 'A'; // ace value
	} 
        else if (CardRank < 9) 
        {
		cout << (CardRank + 1);
	} 
        else if (CardRank == 9) 
        {
		cout << 'T';
	} 
        else if (CardRank == 10) 
        {
		cout << 'J'; // Jack value
	} 
        else if (CardRank == 11) 
        {
		cout << 'Q'; //queen value
	} 
        else {
		cout << 'K'; //king value
	}
	// calculates the suit of the card. Doesn't chance the value of the card in blackjack, but adds to realism of the game :)
	const int Suit = (Card/13);
	if (Suit == 0) {
		cout << 'C'; //clover suit
	} else if (Suit == 1) {
		cout << 'D'; //diamond suit
	} else if (Suit == 2) {
		cout << 'H'; //hearts suit
	} else {
		cout << 'S'; // spade suit
	}
}

void ShowHand(int Hand[], const int CardCount) { //displays hand totals
	using namespace std;
	for (int CardIndex = 0; CardIndex < CardCount; ++CardIndex) {
		const int iDealCard = Hand[CardIndex];
		ShowCard(iDealCard);
		cout << " ";
	}
	cout << endl;
}

int DealCard(bool Deck[]) { //function for dealing out random cards
	bool iCardDealt	= true;
	int iDealCard	= -1;
	do 
        {
		iDealCard = (rand() % 52); //randomizes when dealing out a card from a 52 card deck
		if (!Deck[iDealCard]) {
			iCardDealt = false;
		}
	} 
        while (iCardDealt);
	return iDealCard;
}

int ScoreHand(int Hand[], const int CardCount) { //determine soft ace value, per blackjack rules.
	int AceScore	= 0;
	int iScore		= 0;
	for (int CardIndex = 0; CardIndex < CardCount; ++CardIndex) {
		const int iDealCard = Hand[CardIndex];
		const int CardRank = (iDealCard % 13);
		if (CardRank == 0) {
			++AceScore;
			++iScore;
		} else if (CardRank < 9) {
			iScore = iScore + (CardRank + 1);
		} else {
			iScore = iScore + 10;
		}
	}
	while (AceScore > 0 && iScore < 12) {
		--AceScore;
		iScore = iScore + 10;
	}
	return iScore;
}

void Score(int DealerHand[], const int DealerTotal, int PlayerHand[], const int PlayerTotal) { //function that adds adds up the dealer and player's cards after a hit and displays
	using namespace std;
	cout << "Dealer's Hand: Score = " << ScoreHand(DealerHand, DealerTotal) << endl;
	ShowHand(DealerHand, DealerTotal);
	cout << "Player's Hand: Score = " << ScoreHand(PlayerHand, PlayerTotal) << endl;
	ShowHand(PlayerHand, PlayerTotal);
	cout << endl;
   
}

