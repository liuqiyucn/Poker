#pragma once
#include "Player.h"
#include <iostream>

bool Player::operator>(const Player& other) const{
    return 0;
}

std::ostream& operator<<(std::ostream& os, const Player& p) {
    os << p.name << " has " << p.card1 << " and " << p.card2; 
    return os;
}



