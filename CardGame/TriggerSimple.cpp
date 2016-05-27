#include "stdafx.h"
#include "TriggerSimple.h"


void TriggerSimple::addListener()
{


}

void TriggerSimple::removeListener()
{
}

void TriggerSimple::notifyListener(GameElement* pElement)
{
	list<IEffect*>::iterator it;
	for (it == listOfEffect.begin(); it != listOfEffect.end(); it++)
	{
		IEffect* tmp = *it;
		tmp->notify();
	}
}

TriggerSimple::TriggerSimple(TypeEvent type)
{
	typeEvent = type;
}

TriggerSimple::~TriggerSimple()
{
}
