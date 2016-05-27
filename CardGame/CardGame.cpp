// CardGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include "Match.h"
#include <ctime>


int main()
{
	srand(time(NULL));
	Match* match = new Match(2);


	system("Pause");
    return 0;
}

