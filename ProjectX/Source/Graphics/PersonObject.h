#ifndef PERSONOBJECT_H
#define PERSONOBJECT_H

#include <Game\GameObject.h>

class PersonObject: public GameObject
{
  public:
    PersonObject();
    virtual ~PersonObject();
    void DoLogic;
    void Draw(GraphicWindow *window);
    void Jump;
  protected:
  private:
    int stage; // 0 = running, 1 = jumping
    int posX, initialPosX, speedX;
    int posY, initialPosY, speedY, accelerationY;
    sf::Image img;
    sf::Sprite sprite;
};

#endif 
    
