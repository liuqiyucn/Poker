#pragma once
#include "Player.h"
#include "Dealer.h"
#include <vector>

using std::cout;
using std::cin;
using std::vector;
using std::endl;

class Table
{
private:
    vector<Player> playerList; // total player on the table
	vector<Player> activeList;
    vector<int> cardDeck;
    int tableSize;
	int blindSize;
	Dealer dealer; // when is this created?
public:
    Table() {
		// cin for tableSize and blindSize
		cout << "Please enter the number of players on the table: ";
		cin >> this->tableSize;
		cout << "Please enter the size of small blind: ";
		cin >> this->blindSize;
		cout << "The number of players on the table are: " << tableSize << endl;
		cout << "The blinds are " << blindSize << "/" << blindSize * 2 << endl;

		// create dealer and deals card
		cardDeck = dealer.dealCards(tableSize);

		// construc the players and add them to PlayerList
		int chip;
		char name[32];
		int hash1;
		int hash2;
		for (int i = 0; i < tableSize; i++) {
			cout << "Please enter your name (max lenghth 32): ";
			cin >> name;
			cout << "Please enter your buy-in amount: ";
			cin >> chip;
			hash1 = cardDeck.back();
			cardDeck.pop_back();
			hash2 = cardDeck.back();
			cardDeck.pop_back();
			Player(hash1, hash2, chip, name);
			// playerList.push_back(Player(hash1, hash2, chip, name));
		}


	}

	// main sequences
	void pre();
	void flop();
	void turn();
	void river();

	// helpers
	void resizeTable();
	void resizeBlind();
	void assignBlind();
};
