#ifndef BLOCKOBJECT_H
#define BLOCKOBJECT_H

#include <Game\GameObject.h>

class BlockObject: public GameObject
{
  public:
    BlockOject();
    virtual ~BlockObject();
    void DoLogic;
    void Draw(GraphicWindow *window);
  protected:
  private:
    int stage; // 0 = stopped, 1 = free falling
    int posX;
    int initialPosY, posY, accelerationY;
    sf::Image img;
    sf::Sprite sprite;
};
    
