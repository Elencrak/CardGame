#pragma once
#include "GameElement.h"
#include "Stack.h"

class IEffect
{
public:

	virtual void doEffect() = 0;
	virtual void notify() = 0;

	IEffect();
	~IEffect();
};

