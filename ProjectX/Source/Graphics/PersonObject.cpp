#include "PersonObject.h"

PersonObject::PersonObject()
{
    state = 0; // default state is running
    posY = 310;
    initialPosY = 310;
    speedY = 0;
    gravity = 1;

    framesSinceLastAnim = 0;

    img1.loadFromFile("Graphics/man.png");
    img1.createMaskFromColor(sf::Color(153, 217, 234));
    texture1.loadFromImage(img1);
    img2.loadFromFile("Graphics/man1.png");
    img2.createMaskFromColor(sf::Color(153, 217, 234));
    texture2.loadFromImage(img2);
    img3.loadFromFile("Graphics/man2.png");
    img3.createMaskFromColor(sf::Color(153, 217, 234));
    texture3.loadFromImage(img3);

    currentTexture = 1;

    sprite.setTexture(texture1);

    sprite.setPosition(368, initialPosY);
}


PersonObject::~PersonObject()
{
  //dtor
}

void PersonObject::DoLogic()
{

    framesSinceLastAnim++;

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

    if (framesSinceLastAnim >= (50 / 6) && state == 0)
    {

        //std::cout << "Moving to next texture.. (";
        switch (currentTexture)
        {

        case 1:
            //std::cout << 2;
            sprite.setTexture(texture2);
            currentTexture = 2;
            break;

        case 2:
            //std::cout << 3;
            sprite.setTexture(texture3);
            currentTexture = 3;
            break;

        case 3:
            //std::cout << 1;
            sprite.setTexture(texture1);
            currentTexture = 1;
            break;

        }
        //std::cout << ")\n";

        framesSinceLastAnim = 0;
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
        sprite.setTexture(texture1);
        currentTexture = 1;

    }

}
