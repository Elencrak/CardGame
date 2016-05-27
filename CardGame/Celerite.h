#pragma once
#include "IEffect.h"
class Celerite : public IEffect
{
public:

	void doEffect() override;
	void notify() override;

	Celerite();
	~Celerite();
};

