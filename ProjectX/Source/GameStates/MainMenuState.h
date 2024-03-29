#ifndef MAINMENUSTATE_H
#define MAINMENUSTATE_H

#include <GameStates\GameState.h>
#include <Graphics\GameLogoObject.h>
#include <Menu\MenuButton.h>


class MainMenuState : public GameState
{
    public:
        MainMenuState();
        virtual ~MainMenuState();
        void Draw(GraphicWindow *gfx);
        void HandleInput(sf::Event event);
        bool IsFinished();
    protected:
    private:
        GameLogoObject logo;
        MenuButton startButton;
        bool isFinished;
};

#endif // MAINMENUSTATE_H
