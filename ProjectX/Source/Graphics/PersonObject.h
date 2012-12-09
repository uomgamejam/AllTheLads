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
        sf::Image img;
        sf::Texture texture;
        sf::Sprite sprite;
};

#endif

