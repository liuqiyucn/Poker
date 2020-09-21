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
	int blindSize;
public:
    Table(int blindSize, int tableSize) {
		this->tableSize = tableSize;
		this->blindSize = blindSize;
    }
	void flop();
	void turn();
	void river();
	void resizeTable();
	void resizeBlind();
};
