#pragma once
#include "Player.h"
#include <list>
#include "TriggerSimple.h"


class Stack;
using namespace std;
class Match
{
private:
	int nbPlayer;

public:
	
	list<Player*>* listOfPlayer;
	list<TriggerSimple>* trigger;

	Match(int pNbPlayer);
	~Match();
};

