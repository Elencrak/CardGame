#pragma once
#include "IEffect.h"

class Blast :
	public IEffect
{
public:

	GameElement* targetGameElement;

	int power;

	void doEffect() override;
	void notify() override;
	void setAction(GameElement* target);
	Blast(int amount);
	~Blast();
};

