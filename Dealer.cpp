#include "Dealer.h"

std::vector<int> Dealer::dealCards(int tableSize){
	std::srand(std::time(0));
	std::vector<int> result;
	int random;
	int deckSize = SIZE_OF_DECK;
	int cardNeeded = 2 * tableSize + 8;
	for (int i = 0; i < cardNeeded; i++){
		random = std::rand() % deckSize;
		result.push_back(deck[random]);
		deck.erase(deck.begin() + random);
		deckSize--;
	}
	return result;
}

void Dealer::shuffle(){
	if (deck.empty()){
		deck.clear();
	}
	for (int i = 0; i < SIZE_OF_DECK; i++){
		deck.push_back(i);
	}
}

