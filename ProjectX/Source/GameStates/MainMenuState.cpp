#include "MainMenuState.h"

MainMenuState::MainMenuState() : startButton("startbutton", 300, 450)
{
    //ctor
    logo.SetOpacity(255);
}

MainMenuState::~MainMenuState()
{
    //dtor
}

void MainMenuState::Draw(GraphicWindow *gfx)
{

    logo.Draw(gfx);
    startButton.Draw(gfx);

}
