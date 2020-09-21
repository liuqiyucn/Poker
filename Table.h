#pragma once
#include "Player.h"
#include "Dealer.h"
#include <vector>

class Table
{
private:
    std::vector<Player> playerList;
    std::vector<Card> cardDeck;
    int tableSize;
public:
    Table(int size) {
		tableSize = size;
    }
	void flop(){

	}
	void turn(){

	}
	void river(){

	}
};
