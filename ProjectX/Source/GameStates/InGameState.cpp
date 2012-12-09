#include "InGameState.h"

InGameState::InGameState()
{
    //ctor
}

InGameState::~InGameState()
{
    //dtor
}

void InGameState::DoLogic()
{

    level.DoLogic();

}

void InGameState::Draw(GraphicWindow *gfx)
{

    level.Draw(gfx);

}
