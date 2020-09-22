#pragma once
#include <ctime>
#include <cstdlib>
#include <vector>
#include <iostream>
#define SIZE_OF_DECK 52

using std::cerr;

class Dealer{
private:
	std::vector<int> deck;
public:
	Dealer(){
		cerr << "Constructing dealer" << std::endl;
		shuffle();
	}
	// ===================================
	// vector return?
	// ===================================
	std::vector<int> dealCards(int tableSize);
	void shuffle();
	std::vector<int> getDeck() {
		return deck;
	}
};
