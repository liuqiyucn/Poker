#include "Player.h"
#include <iostream>

bool Player::operator==(const Player& other) const {
	Card p1h1 = this->getLargeCard();
	Card p2h1 = other.getLargeCard();
	bool h1Compare = p1h1 == p2h1;

	Card p1h2 = this->getSmallCard();
	Card p2h2 = other.getSmallCard();
	bool h2Compare = p1h2 == p2h2;
	
	return (h1Compare && h2Compare);
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

Card Player::getSmallCard() const{
	if (getcard1() > getcard2()) {
		return getcard2();
	}
	else {
		return getcard1(); 
	}
}


