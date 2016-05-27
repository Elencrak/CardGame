#include "stdafx.h"
#include "Heal.h"


void Heal::doEffect()
{
	targetGameElement->lifePoint += amountLife;
}

void Heal::notify()
{

}

Heal::Heal(int amount)
{
	amountLife = amount;
}

void Heal::setAction(GameElement* target)
{
	targetGameElement = target;
}
Heal::~Heal()
{
}
