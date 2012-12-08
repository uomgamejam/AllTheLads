#ifndef GAMESTATEMANAGER_H
#define GAMESTATEMANAGER_H

#include <GameStates/GameState.h>
#include <GameStates/SplashScreenState.h>

class GameStateManager
{
    public:
        GameStateManager();
        virtual ~GameStateManager();
        void SetGameState(int gameStateId);
    protected:
    private:
        GameState *currentGameState;
};

#endif // GAMESTATEMANAGER_H
