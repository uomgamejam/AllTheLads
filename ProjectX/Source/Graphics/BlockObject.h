#ifndef BLOCKOBJECT_H
#define BLOCKOBJECT_H

#include <Game\GameObject.h>

class BlockObject : public GameObject
{
    public:
        BlockObject();
        virtual ~BlockObject();
        void DoLogic();
        void Draw(GraphicWindow *window);
        bool IsOffScreen();
    protected:
    private:
        int state; // 0 = stopped, 1 = free falling
        int initialPosY, posY, speedY, gravity;
        sf::Image img;
        sf::Texture texture;
        sf::Sprite sprite;
};

#endif
