#include "game.h"

Game::Game() :
	window()
{

}

void Game::run(int fps)
{
	Clock clock;
	Time timePerFrame = seconds(1.f/fps);
	Time timeSinceLastUpdate = seconds(0);

	while (window.isOpen())
	{
		processEvent();
		update();
		render();

	}
}

void Game::processEvent()
{
	Vector2i windowCoords = Mouse::getPosition(window);
	Vector2f mousePosition = window.mapPixelToCoords(windowCoords);

	Event event;
	while (window.pollEvent(event))
	{
		switch (event.type)
		{
		case Event::Closed:
			window.close();
		default:
			break;
		}
	}
}

void Game::update()
{

}

void Game::render()
{
	window.clear(Color::Black);
	//window.draw();
	window.display();
}
