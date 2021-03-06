#include "sfwdraw.h"
#include "constants.h"
#include "gamestate.h"
#include <iostream>

//2*M(n-1)+1




int main()
{
	player pStat;
	pStat.xPos = 100;
	pStat.yPos = 100;

	enemy eStat;
	eStat.xPos = 40;
	eStat.yPos = 40;

	sfw::initContext(SCREEN_X, SCREEN_Y,"SOME SHITTY GAME");

	unsigned d = sfw::loadTextureMap("./Images/fontmap.png", 16, 16);
	unsigned p = sfw::loadTextureMap("./Images/castleCrasher.png", 1, 1);
	unsigned e = sfw::loadTextureMap("./Images/thief.png", 1, 1);

	while (sfw::stepContext())
	{
		sfw::drawString(d, "ARCHAIC GAMES", 150, 400, 40, 40);
		
		if (sfw::getKey('W'))
		{
			pStat.yPos += MOVEMENT;
			pStat.hasInput = true;
		}
		if (sfw::getKey('D'))
		{
			pStat.xPos += MOVEMENT;
			pStat.hasInput = true;
		}
		if (sfw::getKey('A'))
		{
			pStat.xPos -= MOVEMENT;
			pStat.hasInput = true;
		}
		if (sfw::getKey('S'))
		{
			pStat.yPos -= MOVEMENT;
			pStat.hasInput = true;
		}

		if (pStat.hasInput == true)
		{
			if (pStat.xPos > eStat.xPos && pStat.yPos > eStat.yPos)
			{
				eStat.xPos += MOVEMENT;
				eStat.yPos += MOVEMENT;
				pStat.hasInput = false;
			}

		}
		
		sfw::drawTexture(p, pStat.xPos, pStat.yPos, 40, 40);
		sfw::drawTexture(e, eStat.xPos, eStat.yPos, 40, 40);
	}

	sfw::termContext();

}