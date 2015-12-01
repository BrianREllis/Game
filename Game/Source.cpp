#include "sfwdraw.h"
#include "constants.h"
#include "gamestate.h"
#include "splash.h"
#include <iostream>

//2*M(n-1)+1




int main()
{
	player pStat;
	pStat.xPos = 100;
	pStat.yPos = 100;

	sfw::initContext(SCREEN_X, SCREEN_Y,"SOME SHITTY GAME");

	unsigned d = sfw::loadTextureMap("./Images/fontmap.png", 16, 16);
	unsigned p = sfw::loadTextureMap("./Images/castleCrasher.png", 1, 1);

	while (sfw::stepContext())
	{
		sfw::drawString(d, "ARCHAIC GAMES", 150, 400, 40, 40);
		if (pStat.turnCounter == 0)
		{
			if (sfw::getKey('W'))
				pStat.yPos += sfw::getDeltaTime() * 100;
			if (sfw::getKey('D'))
				pStat.xPos += sfw::getDeltaTime() * 100;
			if (sfw::getKey('A'))
				pStat.xPos -= sfw::getDeltaTime() * 100;
			if (sfw::getKey('S'))
				pStat.yPos -= sfw::getDeltaTime() * 100;
			pStat.turnCounter = 100;
		}
		pStat.turnCounter--;
		sfw::drawTexture(p, pStat.xPos, pStat.yPos, 40, 40);
	}

	sfw::termContext();

}