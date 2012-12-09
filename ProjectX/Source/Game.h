#ifndef GAME_H
#define GAME_H

#include <string>
#include <sstream>
#include <windows.h>

#include <Graphics/GraphicWindow.h>
#include <GameStates/GameStateManager.h>
#include <Input/InputManager.h>

class Game
{
    public:
        Game(int width, int height, std::string title);
        virtual ~Game();
        void Run();
    protected:
    private:
        GraphicWindow gfx;
        GameStateManager gsm;
        InputManager im;
};

#endif // GAME_H
