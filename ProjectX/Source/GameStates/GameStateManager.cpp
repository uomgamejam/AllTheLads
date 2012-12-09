#include "GameStateManager.h"

GameStateManager::GameStateManager()
{

    // Set the game state
    SetGameState(0);

}

GameStateManager::~GameStateManager()
{
    //dtor
}

void GameStateManager::SetGameState(int gameStateId)
{

    switch(gameStateId)
    {

    case 0: // Splash screen
        currentGameStateId = 0;
        currentGameState = new SplashScreenState();
        break;


    }

}

GameState* GameStateManager::GetCurrentState()
{

    return currentGameState;

}

void GameStateManager::MoveToNextState()
{

    switch (currentGameStateId)
    {

    case 0: // Splash screen
        free(currentGameState);
        currentGameState = NULL;
        currentGameState = new GameLogoState();
        break;

    }

}
