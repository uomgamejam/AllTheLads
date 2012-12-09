#include "BlockObject.h"

BlockObject::BlockObject()
{
  stage = 0;
  posX = 50;
  ínitialPosY = 0;
  posY = 0;
  accelerationY = 0;
  img.loadFromFile("Graphics/block.png");
  sprite.setImage(img);
}

BlockObject::~BlockObject(){}

void BlockObject::DoLogic()
{
  FPS = 30; //change to game's FPS
  currentFrames++;
  
  switch(stage)
  {
    case 0: //stopped
      break;
    case 1: //Falling
      if(posY != 0)
        posY = -1/2 * accelerationY * accelerationY * (currenFrames / FPS);
      else
        ~BlockObject();
      break;
  }
}

void BlockObject::fall()
{
  accelerationY = 2;
}

void BlockObject::draw(GraphicsWindow *window)
{
  window->GetSFWindow()->draw(sprite);
}

       
