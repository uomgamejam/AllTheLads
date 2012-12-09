#include "PersonObject.h"

PersonObject::PersonObject()
{
    state = 0; // default state is running
    posY = 310;
    initialPosY = 310;
    speedY = 0;
    gravity = 1;

    img.loadFromFile("Graphics/man.png");
    img.createMaskFromColor(sf::Color(153, 217, 234));
    texture.loadFromImage(img);
    sprite.setTexture(texture);

    sprite.setPosition(368, initialPosY);
}


PersonObject::~PersonObject()
{
  //dtor
}

void PersonObject::DoLogic()
{
    if (state == 1)
    {

        posY -= speedY;
        speedY -= gravity;

        std::cout << "Pos: ";
        std::cout << posY;
        std::cout << ". Speed: ";
        std::cout << speedY;
        std::cout << "\n";

        if (posY >= initialPosY)
        {
            posY = initialPosY;
            state = 0;
        }

        sprite.setPosition(sprite.getPosition().x, posY);

    }
}

void PersonObject::Draw(GraphicWindow *window)
{

    window->GetSFWindow()->draw(sprite);

}

void PersonObject::Jump()
{

    if (state == 0)
    {

        state = 1;
        speedY = 14;

    }

}
