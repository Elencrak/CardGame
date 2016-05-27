#pragma once
#include "IEffect.h"
#include "TypeEvent.h"
#include <list>

using namespace std;
class TriggerSimple
{
public:
	list<IEffect*> listOfEffect;
	TypeEvent typeEvent;

	void addListener();
	void removeListener();
	void notifyListener(GameElement* pElement);

	TriggerSimple(TypeEvent type);
	~TriggerSimple();
};

