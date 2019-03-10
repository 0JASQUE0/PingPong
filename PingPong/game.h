#pragma once
#include "world.h"

class Game
{
public:

	Game();

	void run(int fps);

private:
	
	void processEvent();

	void update();

	void render();

	RenderWindow window;

};