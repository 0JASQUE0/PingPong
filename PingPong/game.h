#pragma once
#include "console.h"

class Game
{
public:

	void run(int fps);

private:
	
	void processEvent();

	void update();

	void render();

	RenderWindow window;

};