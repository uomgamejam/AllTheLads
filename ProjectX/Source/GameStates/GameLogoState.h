#ifndef GAMELOGOSTATE_H
#define GAMELOGOSTATE_H

#include <GameStates\GameState.h>
#include <Graphics\GameLogoObject.h>

class GameLogoState : public GameState
{
    public:
        GameLogoState();
        virtual ~GameLogoState();
        bool IsFinished();
        void DoLogic();
        void Draw(GraphicWindow *gfx);
    protected:
    private:
        GameLogoObject logo;
        bool isFinished;
};

#endif // GAMELOGOSTATE_H
