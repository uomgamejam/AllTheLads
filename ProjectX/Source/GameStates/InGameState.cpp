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
    person.DoLogic();

}

void InGameState::Draw(GraphicWindow *gfx)
{

    level.Draw(gfx);
    person.Draw(gfx);

}

void InGameState::HandleInput(sf::Event event)
{

    switch (event.type)
    {

    case sf::Event::KeyReleased:
        std::cout << "EVENT: Key released - ";
        std::cout << event.key.code;
        std::cout << "\n";
        if (event.key.code == sf::Keyboard::Space)
            person.Jump();
        break;

    default:
        break;

    }

}
