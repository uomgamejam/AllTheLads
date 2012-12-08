#ifndef SPLASHSCREENSTATE_H
#define SPLASHSCREENSTATE_H

#include <GameStates\GameState.h>
#include <Graphics\ATLLogoObject.h>

class SplashScreenState : public virtual GameState
{
    public:
        SplashScreenState();
        virtual ~SplashScreenState();
        void DoLogic();
        void Draw(GraphicWindow *gfx);
    protected:
    private:
};

#endif // SPLASHSCREENSTATE_H
