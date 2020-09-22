#include "Card.h"


string Card::decodeColor(int hash) const {
    if (hash >= 0 && hash <= 12) {
        return "Diamond";
    }
    else if (hash >= 13 && hash <= 25) {
        return "Club";
    }
    else if (hash >= 26 && hash <= 38) {
        return "Heart";
    }
    else if (hash >= 39 && hash <= 51) {
        return "Spade";
    }
	else{
		std::cerr << "The hash number entered is out of range" << std::endl;
		return NULL;
	}

}

// decode the size and set the appropriate sizetoString value
int Card::decodeSize(int hash) const {
	if (hash > 51){
		std::cerr << "The hash number entered is out of range" << std::endl;
		return 0;
	}
    return hash % 13;
}

string Card::sizetoString(int size) const {
    switch (size)
    {
    default:
        return NULL;
    case 0:
        return "Two";
    case 1:
        return "Three";
    case 2:
        return "Four";
    case 3:
        return "Five";
    case 4:
        return "Six";
    case 5:
        return "Seven";
    case 6:
        return "Eight";
    case 7:
        return "Nine";
    case 8:
        return "Ten";
    case 9:
        return "Jack";
    case 10:
        return "Queen";
    case 11:
        return "King";
    case 12:
        return "Ace";
    }

}

// check if the size of the two cards is the same
// DOES NOT CHECK FOR COLOR ! 
bool Card::operator==(const Card& other) const{
	return this->size == other.size;
}

bool Card::operator>(const Card& other) const{
	return this->size > other.size;
}

std::ostream& operator<<(std::ostream& os, const Card& C) {
    os << C.color << " of " << C.sizeString;
    return os;
}
