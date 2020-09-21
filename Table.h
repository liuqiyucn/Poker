#pragma once
#include "Player.h"
#include <vector>

class Table
{
private:
    Player* playerList;
    std::vector<int> cardDeck;
    int tableSize;
public:
    Table(int size) {
        playerList = (Player *) malloc(sizeof(Player) * size);
        tableSize = size;
    }
};
