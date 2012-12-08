#include "Game.h"

Game::Game(int width, int height, std::string title) : gfx(width, height, 32, title),
    gsm(), im()
{

    // DO NOTHING

}

Game::~Game()
{
}


void Game::Run()
{

    while (!gfx.IsClosing())
    {

        // Handle input
        im.HandleInput(&gfx);

    }

}

