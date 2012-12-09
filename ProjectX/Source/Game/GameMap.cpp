#include "GameMap.h"

GameMap::GameMap()
{

    // Set background
    bgImg.loadFromFile("Graphics\\Background.png");
    bgImg.createMaskFromColor(sf::Color(153, 217, 234));
    bgTexture.loadFromImage(bgImg);
    bg.setTexture(bgTexture);

    // And foreground
    caveImg.loadFromFile("Graphics\\cave.png");
    caveImg.createMaskFromColor(sf::Color(153, 217, 234));
    caveTexture.loadFromImage(caveImg);
    cave1.setTexture(caveTexture);
    cave2.setTexture(caveTexture);
    //cave3.setTexture(caveTexture);

    // Setup foreground positions
    cave1.setPosition(0, 0);
    cave2.setPosition(800, 0);
    //cave3.setPosition(1600, 0);

}

GameMap::~GameMap()
{
    //dtor
}

void GameMap::DoLogic()
{

    // Move everything left 2
    cave1.setPosition(cave1.getPosition().x - 2, 0);
    cave2.setPosition(cave2.getPosition().x - 2, 0);
    //cave3.setPosition(cave3.getPosition().x - 1);

    if (cave1.getPosition().x <= -800)
        cave1.setPosition(cave2.getPosition().x + 800, 0);
    else if (cave2.getPosition().x <= -800)
        cave2.setPosition(cave1.getPosition().x + 800, 0);
    //else if (cave3.getPosition().x <= -800
      //  cave3.setPosition(cave2.getPosition().x + 800);

}

void GameMap::Draw(GraphicWindow *gfx)
{

    gfx->GetSFWindow()->draw(bg);
    gfx->GetSFWindow()->draw(cave1);
    gfx->GetSFWindow()->draw(cave2);
    gfx->GetSFWindow()->draw(cave3);

}
