#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <list>

#include <Game/GameObject.h>

class GameState
{
    public:
        GameState();
        virtual ~GameState();
        virtual bool IsFinished(){return false;};
        virtual void EnterState(){};
        virtual void ExitState(){};
        virtual void DoLogic(){};
        virtual void Draw(GraphicWindow *gfx){};
        virtual void HandleInput(sf::Event event){};
    protected:
        std::list<GameObject> objectsInScene;
    private:
};

#endif // GAMESTATE_H
