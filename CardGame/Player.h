#pragma once
#include "Board.h"
#include <list>
#include "Pool.h"
#include "GameElement.h"
#include "TriggerSimple.h"
#include "TypeEvent.h"

class Match;
using namespace std;
class Player : public GameElement
{
private:
	int nbCardDeck;
public:
	
	Board* myBoard;
	Pool* graveGuard;
	Pool* hand;
	Pool* deck;
	Match* currentMatch;
	TriggerSimple* playCard;


	void round();

	Player(int pNbCardDeck, Match* pCurrentMatch);
	~Player();
};

