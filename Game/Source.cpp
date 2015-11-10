#include "sfwdraw.h"
#include "constants.h"
#include "gamestate.h"
#include "splash.h"
#include <iostream>

//2*M(n-1)+1




int main()
{
	sfw::initContext(SCREEN_X, SCREEN_Y,"SOME SHITTY GAME");
	unsigned d = sfw::loadTextureMap("./Images/fontmap.png", 16, 16);

	while (sfw::stepContext())
	{
		sfw::drawString(d, "ARCHAIC GAMES", 150, 400, 40, 40);
	}

	sfw::termContext();

}