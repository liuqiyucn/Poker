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
		cerr << "Feeding srand" << std::endl;
		std::srand(std::time(0));
		shuffle();
	}
	// ===================================
	// vector return?
	// ===================================

	
	std::vector<int> getDeck() const{
		return deck;
	}

	// declarations
	std::vector<int> dealCards(int tableSize);
	void shuffle();
	int getButtom(int tableSize);
};
