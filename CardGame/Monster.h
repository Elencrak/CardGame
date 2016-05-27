#pragma once
#include "IEffect.h"
class Monster :
	public IEffect
{
public:
	void doEffect() override;
	void notify() override;

	Monster();
	~Monster();
};

