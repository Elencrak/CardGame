#pragma once
#include <list>
#include "Card.h"

using namespace std;
class Pool
{
private:
	int nbCard;
public:
	list<Card*> listOfCard;

	void addCard();
	void removeCard();
	Card getCard();

	Pool();
	Pool(int pNbCard);
	~Pool();
};

