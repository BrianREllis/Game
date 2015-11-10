#pragma once
#include <iostream>

class GameState 
{
private:
	enum gameStates { SPLASH, MENU, PLAY };
public:
	gameStates currentState = SPLASH;
	static void setState(gameStates cState);
	gameStates getState();
};