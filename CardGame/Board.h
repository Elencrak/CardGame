#pragma once
#include "Player.h"
#include <list>
#include "Card.h"

using namespace std;
class Board
{
public:
	list<Card*> listOfCard;

	void addCard();
	void removeCard();

	int checkMana(int myMana);

	Board();
	~Board();
};

