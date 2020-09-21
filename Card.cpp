#include "Card.h"


const char* Card::decodeColor(int hash) const {
    if (hash >= 1 && hash <= 13) {
        return "Diamond";
    }
    else if (hash >= 14 && hash <= 26) {
        return "Club";
    }
    else if (hash >= 27 && hash <= 39) {
        return "Heart";
    }
    else {
        return "Spade";
    }

}

// decode the size and set the appropriate sizetoString value
int Card::decodeSize(int hash) const {
    return hash % 13;
}

const char* Card::sizetoString(int size) const {
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

std::ostream& operator<<(std::ostream& os, const Card& C) {
    os << C.color << " of " << C.sizeString;
    return os;
}
