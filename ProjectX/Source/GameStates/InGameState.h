#ifndef INGAMESTATE_H
#define INGAMESTATE_H

#include <Game\GameMap.h>
#include <Gamestates\GameState.h>

class InGameState : public GameState
{
    public:
        InGameState();
        virtual ~InGameState();
        void DoLogic();
        void Draw(GraphicWindow *gfx);
    protected:
    private:
        GameMap level;
};

#endif // INGAMESTATE_H
