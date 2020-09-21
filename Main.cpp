#pragma once
#include <iostream>
#include "Table.h"
#include "Player.h"
#include "Card.h"

int main()
{
    Player p(15, 21, 1000, "Leo");
    std::cout << p << "." << std::endl;
	Card c = p.getcard1();
	std::cout << c << "." << std::endl;
}
