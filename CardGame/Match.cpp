#include "stdafx.h"
#include "Match.h"

Match::Match(int pNbPlayer)
{
	nbPlayer = pNbPlayer;
	listOfPlayer = new list<Player*>();
	for (int i = 0; i < nbPlayer; i++) 
	{
		listOfPlayer->push_back(new Player(50, this));
	}
}

Match::~Match()
{
}
