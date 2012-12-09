#ifndef INGAMESTATE_H
#define INGAMESTATE_H

#include <Game\GameMap.h>
#include <Graphics/PersonObject.h>
#include <Gamestates\GameState.h>

class InGameState : public GameState
{
    public:
        InGameState();
        virtual ~InGameState();
        void DoLogic();
        void Draw(GraphicWindow *gfx);
        void HandleInput(sf::Event event);
    protected:
    private:
        GameMap level;
        PersonObject person;
};

#endif // INGAMESTATE_H
