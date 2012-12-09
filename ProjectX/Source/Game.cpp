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

    const int FRAMES_PER_SECOND = 50;
    const int GFX_FRAMES_PER_SECOND = 100;
    const int SKIP_TICKS = 1000 / FRAMES_PER_SECOND;
    const int GFX_SKIP_TICKS = 1000 / GFX_FRAMES_PER_SECOND;

    DWORD next_gfx_tick = GetTickCount();
    DWORD next_game_tick = GetTickCount();
    DWORD current_ticks = GetTickCount();
    DWORD last_tick = 0;

    sf::Font font;
    font.loadFromFile("arial.ttf");
    sf::Text text1;
    text1.setFont(font);
    text1.setCharacterSize(30);
    text1.setStyle(sf::Text::Regular);
    text1.setPosition(10.0, 10.0);

    while (!gfx.IsClosing())
    {

        if (next_gfx_tick <= current_ticks)
        {

            std::stringstream ss;
            ss << 1000 / (current_ticks - last_tick);
            text1.setString(ss.str());

            gfx.GetSFWindow()->clear();
            gsm.GetCurrentState()->Draw(&gfx);
            gfx.GetSFWindow()->draw(text1);
            gfx.GetSFWindow()->display();

            next_gfx_tick = current_ticks + GFX_SKIP_TICKS;


        }

        if (next_game_tick <= current_ticks)
        {

            // Handle input
            im.HandleInput(&gfx);

            // Do logic and draw
            gsm.GetCurrentState()->DoLogic();
            //gsm.GetCurrentState()->Draw(&gfx);
            //gfx.GetSFWindow()->display();

            if (gsm.GetCurrentState()->IsFinished())
                gsm.MoveToNextState();

            next_game_tick = current_ticks + SKIP_TICKS;

        }

        last_tick = current_ticks;
        current_ticks = GetTickCount();

    }


}

