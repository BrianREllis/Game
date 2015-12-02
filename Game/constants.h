#pragma once
#include <iostream>

enum STATE {INIT, MAIN , PLAY, GAME, EXIT};

const int SCREEN_X = 800;
const int SCREEN_Y = 600;

class Character
{
public:
	float xPos, yPos;
};

class player : public Character
{
public:
	bool hasInput = false;
private:

};

class enemy : public Character
{
public:
	void movement()
	{
		
	}
};

//game object class base



/*class GameObject
{
	bool isActive;
	float xPos, yPos, width, height, radius, angle;
	unsigned textureHandle;

	virtual void draw();
	virtual void update();
	virtual void onCollidion();
};*/