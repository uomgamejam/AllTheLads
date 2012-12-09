#include "MainMenuState.h"

MainMenuState::MainMenuState() : startButton("startbutton", 250, 450)
{
    logo.SetOpacity(255);
    isFinished = false;
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

void MainMenuState::HandleInput(sf::Event event)
{

    switch (event.type)
    {

    case sf::Event::KeyReleased:
        std::cout << "EVENT: Key released - ";
        std::cout << event.key.code;
        std::cout << "\n";
        if (event.key.code == sf::Keyboard::Space)
            isFinished = true;
        break;

    default:
        break;

    }

}

bool MainMenuState::IsFinished()
{

    return isFinished;

}
