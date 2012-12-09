#ifndef SPLASHSCREENSTATE_H
#define SPLASHSCREENSTATE_H

#include <GameStates\GameState.h>
#include <Graphics\ATLLogoObject.h>

class SplashScreenState : public virtual GameState
{
    public:
        SplashScreenState();
        virtual ~SplashScreenState();
        bool IsFinished();
        void DoLogic();
        void Draw(GraphicWindow *gfx);
    protected:
    private:
        ATLLogoObject logo;
        bool isFinished;
};

#endif // SPLASHSCREENSTATE_H
