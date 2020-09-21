#pragma once
#include <iostream>

class Card
{
private:
	const char* color;
	int size;
	const char* sizeString;

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

	const char* getColor() {
		return color;
	}

	int getSize() {
		return size;
	}
	bool operator>(const Card& other) const;
	const char* decodeColor(int hash) const;
	int decodeSize(int hash) const;
	const char* sizetoString(int size) const;
	friend std::ostream& operator<<(std::ostream& os, const Card& C);
};
