#include "GameLogoObject.h"

GameLogoObject::GameLogoObject()
{

    // Load the texture
    bool worked = true;
    img.loadFromFile("Graphics/logo.png");
    img.createMaskFromColor(sf::Color(153, 217, 234));
    texture.loadFromImage(img);
    sprite.setTexture(texture);
    sprite.setColor(sf::Color(255, 255, 255, 0));

    // Set the transition and holding times
    transitionTime = 1000 * 5;
    opacitySteps = 255 / (transitionTime / 50);
    transitionStepTime = 1000 / 50;
    nextTransitionTime = transitionStepTime;
    holdingTime = 0;
    currentTime = 0;
    stage = 0;
    opacity = 0;

}

GameLogoObject::~GameLogoObject()
{
    //dtor
}

void GameLogoObject::DoLogic()
{

    switch (stage)
    {

        case 0:
            opacity += opacitySteps;
            sprite.setColor(sf::Color(255, 255, 255, opacity));
            nextTransitionTime += transitionStepTime;
            if (opacity >= 255)
                isFinished = true;
            break;

        case 1:
            if (currentTime >= transitionTime + holdingTime)
            {
                currentTime = 0;
                stage++;
            }
            break;

        case 2:
            if (currentTime % transitionStepTime == 0)
            {
                opacity -= opacitySteps;
                sprite.setColor(sf::Color(255, 255, 255, opacity));
            }
            //if (opacity == 100)
            //  stage++;
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
