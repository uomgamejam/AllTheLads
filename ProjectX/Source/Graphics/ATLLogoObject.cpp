#include "ATLLogoObject.h"

ATLLogoObject::ATLLogoObject()
{

    // Load the texture
    texture.loadFromFile("Graphics/Splash.png");
    sprite.setTexture(texture);

    // Set the transition and holding times
    transitionTime = 1000 * 5;
    transitionStepTime = transitionTime / 50;
    holdingTime = 1000 * 5;
    currentTime = 0;
    stage = 0;

}

ATLLogoObject::~ATLLogoObject()
{
    //dtor
}

void ATLLogoObject::DoLogic()
{

    currentTime += (1000 / 50);

    switch (stage)
    {

        case 0:
            if (currentTime % transitionStepTime == 0)
            {
                opacity += 2;
                int sfOpacity = (255 / 100) * opacity;
                sprite.setColor(sf::Color(255, 255, 255, sfOpacity));
            }
            if (opacity == 100)
                stage++;
            break;

        case 1:
            if (currentTime == transitionTime + holdingTime)
                stage++;
            break;

        case 2:
            if (currentTime % transitionStepTime == 0)
            {
                opacity -= 2;
                int sfOpacity = (255 / 100) * opacity;
                sprite.setColor(sf::Color(255, 255, 255, sfOpacity));
            }
            //if (opacity == 100)
            //  stage++;
            break;

    }

}

void ATLLogoObject::Draw(GraphicWindow *window)
{

    window->GetSFWindow()->draw(sprite);

}
