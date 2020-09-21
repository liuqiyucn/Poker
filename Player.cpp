#pragma once
#include "Player.h"
#include <iostream>

bool Player::operator==(const Player& other) const {
	if ()
}

bool Player::operator>(const Player& other) const{
	if (this->isFold() && other.isFold()){
		return false;
	}
	else if (this->isFold()){
		return false;
	}
	else if (other.isFold()){
		return true;
	}
	else if (this->getRank() == other.getRank()){
		return this->getLargeCard() > other.getLargeCard();
	}
	else{
		return this->getRank() > other.getRank();
	}
}

std::ostream& operator<<(std::ostream& os, const Player& p) {
    os << p.name << " has " << p.hand[0] << " and " << p.hand[1]; 
    return os;
}

// return the larger card
Card Player::getLargeCard() const{
	if (getcard1() > getcard2()) {
		return getcard1();
	}
	else {
		return getcard2();
	}
}


