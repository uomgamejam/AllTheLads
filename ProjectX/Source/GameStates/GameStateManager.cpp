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
        std::cout << "Moving to new state... 0 (Splash screen)\n";
        free(currentGameState);
        currentGameState = NULL;
        currentGameStateId = 0;
        currentGameState = new SplashScreenState();
        break;

    case 1: // 2nd Splash screen
        std::cout << "Moving to new state... 1 (Second splash screen)\n";
        free(currentGameState);
        currentGameState = NULL;
        currentGameStateId = 1;
        currentGameState = new GameLogoState();
        break;

    case 2: // Main menu
        std::cout << "Moving to new state... 2 (Main menu screen)\n";
        free(currentGameState);
        currentGameState = NULL;
        currentGameStateId = 2;
        currentGameState = new GameLogoState();
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
        std::cout << "Moving to next state... 1 (Second splash screen)\n";
        free(currentGameState);
        currentGameState = NULL;
        currentGameStateId = 1;
        currentGameState = new GameLogoState();
        break;

    case 1: // Second splash
        std::cout << "Moving to next state... 2 (Main menu screen)\n";
        free(currentGameState);
        currentGameState = NULL;
        currentGameStateId = 2;
        currentGameState = new MainMenuState();
        break;

    }

}
