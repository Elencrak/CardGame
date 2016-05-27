#pragma once
#include "IEffect.h"

class EffectMultiple
{
public:

	void notify();
	void addEffect(IEffect* pEffect);
	void removeEffect(IEffect* pEffect);
	IEffect* getChild();

	EffectMultiple();
	~EffectMultiple();
};

