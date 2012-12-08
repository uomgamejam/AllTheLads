#include "SplashScreenState.h"

SplashScreenState::SplashScreenState()
{
    ATLLogoObject logo;
    objectsInScene.push_back(logo);

}

SplashScreenState::~SplashScreenState()
{
    //dtor
}

void SplashScreenState::DoLogic()
{

    // LOGIC BITCHES
    for (std::list<GameObject>::iterator it = objectsInScene.begin(); it != objectsInScene.end(); it++)
        it->DoLogic();

}

void SplashScreenState::Draw(GraphicWindow *gfx)
{

    for (std::list<GameObject>::iterator it = objectsInScene.begin(); it != objectsInScene.end(); it++)
        it->Draw(gfx);

}
