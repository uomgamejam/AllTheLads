#include "InputManager.h"

InputManager::InputManager()
{
    // DO NOTHING
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
            gsm->GetCurrentState()
            break;

        }

    }

}
