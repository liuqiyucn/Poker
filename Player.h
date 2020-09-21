#pragma once
#include "Card.h"
#include <vector>

class Player
{
private:
	std::vector<Card> hand;
	// Card card1;
	// Card card2;
	int chip;
	int rank; // default rank is 0, high card 
	bool inGame; // true for in game players, false for folding players
	bool onTable; // remove player if onTable is false
	const char* name;
public:
	Player() {
		std::cerr << "Default player constructor is called..." << std::endl;
	}
	Player(int hash1, int hash2, int chip, const char* name) {
		hand.push_back(Card(hash1));
		hand.push_back(Card(hash2));
		// this->card1 = Card(hash1);
		// this->card2 = Card(hash2);
		this->chip = chip;
		this->name = name;
		onTable = true;
		inGame = true;
		rank = 0; // high card
	}
	Card getcard1(){
		return hand[0];
	}
	Card getcard2(){
		return hand[1];
	}
	bool operator>(const Player& other) const;
	friend std::ostream& operator<<(std::ostream& os, const Player& p);
};


