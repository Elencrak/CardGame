#pragma once
#include "IEffect.h"

class Heal :
	public IEffect
{
public:
	GameElement* targetGameElement;
	int amountLife;

	void setAction(GameElement* target);

	void doEffect() override;
	void notify() override;

	Heal(int amount);
	~Heal();
};

