#pragma once
#include <iostream>
#include <string>

using std::string;

class Card
{
private:
	string color;
	int size;
	string sizeString;

public:
	Card() { 
		std::cerr << "Default card constructor is called..." << std::endl;
	}

	// hash initializer
	Card(int hash) {
		this->color = decodeColor(hash);
		this->size = decodeSize(hash);
		this->sizeString = sizetoString(size);
	}

	string getColor() const{
		return color;
	}

	int getSize() const {
		return size;
	}
	bool operator>(const Card& other) const;
	bool operator==(const Card& other) const;
	string decodeColor(int hash) const;
	int decodeSize(int hash) const;
	string sizetoString(int size) const;
	friend std::ostream& operator<<(std::ostream& os, const Card& C);
};
