#include "stdafx.h"
#include "Blast.h"


void Blast::doEffect()
{

}

void Blast::notify()
{
	
}

void Blast::setAction(GameElement* target)
{
	targetGameElement = target;
}

Blast::Blast(int amount)
{
	power = amount;
}


Blast::~Blast()
{
}
