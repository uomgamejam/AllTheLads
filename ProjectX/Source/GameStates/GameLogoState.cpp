#include "GameLogoState.h"

GameLogoState::GameLogoState()
{
    //ATLLogoObject logo;
    //objectsInScene.push_back(logo);

}

GameLogoState::~GameLogoState()
{
    //dtor
}

bool GameLogoState::IsFinished()
{

    return logo.IsFinished();

}

void GameLogoState::DoLogic()
{

    // LOGIC BITCHES
    logo.DoLogic();

}

void GameLogoState::Draw(GraphicWindow *gfx)
{

    logo.Draw(gfx);
}

