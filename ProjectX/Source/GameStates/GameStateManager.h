#ifndef GAMESTATEMANAGER_H
#define GAMESTATEMANAGER_H

#include <GameStates/GameState.h>
#include <GameStates/SplashScreenState.h>
#include <GameStates/GameLogoState.h>

class GameStateManager
{
    public:
        GameStateManager();
        virtual ~GameStateManager();
        void SetGameState(int gameStateId);
        GameState* GetCurrentState();
        void MoveToNextState();
    protected:
    private:
        GameState *currentGameState;
        int currentGameStateId;
};

#endif // GAMESTATEMANAGER_H
