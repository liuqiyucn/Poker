#pragma once
#include <iostream>
#include "Table.h"
#include "Player.h"
#include "Card.h"

int main()
{
    Player p(15, 21, 1000, "Leo");
    std::cout << p << "." << std::endl;
}