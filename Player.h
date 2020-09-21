#pragma once
#include "Card.h"

class Player
{
private:
	Card card1;
	Card card2;
	int chip;
	const char* name;
public:
	Player() {
		std::cerr << "Default player constructor is called..." << std::endl;
	}
	Player(int hash1, int hash2, int chip, const char* name) {
		this->card1 = Card(hash1);
		this->card2 = Card(hash2);
		this->chip = chip;
		this->name = name;
	}
	bool operator>(const Player& other) const;
	friend std::ostream& operator<<(std::ostream& os, const Player& p);
};


