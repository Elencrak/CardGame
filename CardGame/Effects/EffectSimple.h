#pragma once
#include "../IEffect.h"

class EffectSimple : public IEffect
{
public:

	void doEffect();
	void notify();

	EffectSimple();
	~EffectSimple();
};

