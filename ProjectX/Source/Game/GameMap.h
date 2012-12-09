#ifndef GAMEMAP_H
#define GAMEMAP_H

#include <Game\GameObject.h>

class GameMap : GameObject
{
    public:
        GameMap();
        virtual ~GameMap();
        void DoLogic();
        void Draw(GraphicWindow *gfx);
    protected:
    private:
        sf::Image bgImg;
        sf::Texture bgTexture;
        sf::Sprite bg;
        sf::Sprite bg2;
        sf::Image caveImg;
        sf::Texture caveTexture;
        sf::Sprite cave1;
        sf::Sprite cave2;
        sf::Sprite cave3;

};

#endif // GAMEMAP_H
