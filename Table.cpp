#include "Table.h"

void Table::pre() {
	assignBlind();
}

void Table::flop() {

}

void Table::turn() {

}

void Table::river() {

}

void Table::finish() {

}

// Below are helper functions

// remove the players that left
void Table::resizeTable() {

}

// change the blind size
void Table::resizeBlind() {

}

// 
void Table::assignBlind() {
	int buttomIndex = dealer.getButtom(tableSize);
	for (int i = 0; i < tableSize; i++) {
		if (buttomIndex > tableSize - 1) {
			buttomIndex = 0;
		}
		activeList.push_back(playerList[buttomIndex]);
		buttomIndex++;
	}
	if (activeList.size() != playerList.size()) {
		cerr << "Assign blind failed..." << endl;
	}
}