#pragma once
#include <iostream>
#include "Table.h"
#include "Player.h"
#include "Card.h"

int main()
{
    Player p1(15, 21, 1000, "Leo");
    std::cout << p1 << "." << std::endl;
	Player p2(12, 32, 1000, "John");
	std::cout << p2 << "." << std::endl;
	std::cout << "Is p1 greater than p2: " << (p1 > p2) << "." << std::endl;
}
