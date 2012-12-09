#include "SplashScreenState.h"

SplashScreenState::SplashScreenState()
{
    //ATLLogoObject logo;
    //objectsInScene.push_back(logo);

}

SplashScreenState::~SplashScreenState()
{
    //dtor
}

bool SplashScreenState::IsFinished()
{

    return logo.IsFinished();

}

void SplashScreenState::DoLogic()
{

    // LOGIC BITCHES
    logo.DoLogic();

}

void SplashScreenState::Draw(GraphicWindow *gfx)
{

    logo.Draw(gfx);
}
