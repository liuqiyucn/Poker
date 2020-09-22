#pragma once
#include "Card.h"
#include <vector>
#include <string>

using std::string;

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
	string name;
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
	Card getcard1() const{
		return hand[0];
	}
	Card getcard2() const{
		return hand[1];
	}
	bool isFold() const{
		return !inGame;
	}
	bool isPlaying() const{
		return onTable;
	}
	int getRank() const{
		return rank;
	}
	Card getLargeCard() const;
	Card getSmallCard() const;
	bool operator>(const Player& other) const;
	bool operator==(const Player& other) const;
	friend std::ostream& operator<<(std::ostream& os, const Player& p);
};


