#include "GameLogoObject.h"
#include <iostream>

GameLogoObject::GameLogoObject()
{

    // Load the texture
    bool worked = true;
    img.loadFromFile("Graphics/logo.png");
    img.createMaskFromColor(sf::Color(153, 217, 234));
    texture.loadFromImage(img);
    sprite.setTexture(texture);
    sprite.setColor(sf::Color(255, 255, 255, 0));
    sprite.setPosition(400 - (img.getSize().x / 2), 300 - (img.getSize().y / 2));

    // Set the transition and holding times
    transitionTime = 1000 * 2;
    opacitySteps = 255 / (transitionTime / 50);
    transitionStepTime = 1000 / 50;
    nextTransitionTime = transitionStepTime;
    holdingTime = 50;
    currentFrames = 0;
    stage = 0;
    opacity = 0;

}

GameLogoObject::~GameLogoObject()
{
    //dtor
}

void GameLogoObject::DoLogic()
{

    currentFrames++;

    switch (stage)
    {

        case 0:
            opacity += opacitySteps;
            if (opacity > 255) opacity = 255;
            sprite.setColor(sf::Color(255, 255, 255, opacity));
            if (opacity == 255)
            {
                currentFrames = 0;
                stage++;
            }
            break;

        case 1:
            sprite.setColor(sf::Color(255, 255, 255, 255));
            if (currentFrames >= holdingTime)
            {
                stage++;
                isFinished = true;
            }
            break;

    }

}

void GameLogoObject::Draw(GraphicWindow *window)
{

    window->GetSFWindow()->draw(sprite);

}

bool GameLogoObject::IsFinished()
{

    return isFinished;

}

void GameLogoObject::SetOpacity(int opacity)
{

    sprite.setColor(sf::Color(255, 255, 255, opacity));

}
