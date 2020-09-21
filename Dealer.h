#pragma once
#include <ctime>
#include <cstdlib>
#include <vector>
#define SIZE_OF_DECK 54

class Dealer{
private:
	std::vector<int> deck;
public:
	Dealer(){
		shuffle();
	}
	// ===================================
	// vector return?
	// ===================================
	std::vector<int> dealCards(int tableSize);
	void shuffle();
};
