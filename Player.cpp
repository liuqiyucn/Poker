#pragma once
#include "Player.h"
#include <iostream>

bool Player::operator>(const Player& other) const{
    return 0;
}

std::ostream& operator<<(std::ostream& os, const Player& p) {
    os << p.name << " has " << p.hand[0] << " and " << p.hand[1]; 
    return os;
}



