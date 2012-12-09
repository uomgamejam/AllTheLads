#include "BlockObject.h"

BlockObject::BlockObject()
{
    state = 1;
    posY = 150;
    initialPosY = 150;
    speedY = 0;
    gravity = 1;

    img.loadFromFile("Graphics/block1.png");
    img.createMaskFromColor(sf::Color(153, 217, 234));
    texture.loadFromImage(img);
    sprite.setTexture(texture);

    sprite.setPosition(700, 150);
}

BlockObject::~BlockObject(){}

void BlockObject::DoLogic()
{

    if (state == 1)
    {

        posY -= speedY;
        speedY -= gravity;

        if (posY >= 342)
        {
            posY = 342;
            state = 0;
        }

        sprite.setPosition(sprite.getPosition().x, posY);

    }

    sprite.setPosition(sprite.getPosition().x - 4, sprite.getPosition().y);

}

void BlockObject::Draw(GraphicWindow *window)
{
  window->GetSFWindow()->draw(sprite);
}

bool BlockObject::IsOffScreen()
{

    return sprite.getPosition().x < 0;

}
