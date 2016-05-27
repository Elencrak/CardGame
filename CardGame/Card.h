#pragma once
#include "Type.h"
#include "IEffect.h"
#include <list>
#include "GameElement.h"

using namespace std;

class Card : public GameElement
{
public:
	Type typeCard;	

	// Base effect
	IEffect* handEffect;
	IEffect* playingEffect;
	IEffect* putEffect;
	IEffect* dieEffect;

	Card();
	~Card();
};

