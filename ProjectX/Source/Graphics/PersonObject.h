#ifndef PERSONOBJECT_H
#define PERSONOBJECT_H

#include <Game\GameObject.h>

class PersonObject: public GameObject
{
    public:
        PersonObject();
        virtual ~PersonObject();
        void DoLogic();
        void Draw(GraphicWindow *window);
        void Jump();
    protected:
    private:
        int state; // 0 = running, 1 = jumping
        int posY, initialPosY, speedY, gravity;
        int currentTexture;
        int framesSinceLastAnim;
        sf::Image img1;
        sf::Image img2;
        sf::Image img3;
        sf::Texture texture1;
        sf::Texture texture2;
        sf::Texture texture3;
        sf::Sprite sprite;
};

#endif

