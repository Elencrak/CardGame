#pragma once
#include "Match.h"
#include "IEffect.h"
#include <list>

using namespace std;
class Stack
{
public:
	list<IEffect*>* listOfEffects;
	Stack();
	~Stack();
};

