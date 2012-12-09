#include "InputManager.h"

InputManager::InputManager(GameStateManager *gsm)
{
    gameStateMan = gsm;
}

InputManager::~InputManager()
{
    // DO NOTHING
}

void InputManager::HandleInput(GraphicWindow *window)
{

    sf::Event event;

    while (window->GetSFWindow()->pollEvent(event))
    {

        switch (event.type)
        {

        case sf::Event::Closed:
            window->SetClosing();
            break;

        default:
            //std::cout << "Unknown event - ";
            //std::cout << event.type;
            //std::cout << " - passing to current state.\n";
            gameStateMan->GetCurrentState()->HandleInput(event);
            break;

        }

    }

}
