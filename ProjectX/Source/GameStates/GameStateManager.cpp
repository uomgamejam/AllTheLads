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
        currentGameState = new SplashScreenState();
        break;


    }

}
