#include "PersonObject.h"

PersonObject::PersonObject()
{
  stage = 0; // default state is running
  posX = 10;
  initialPosX = 10;
  speedX = 1;
  posY = 10;
  initialPosY = 10;
  speedY = 0;
  accelerationY = 0; //Change to initial values on the screen
  img.loafFromFile("Graphics/man.png");
  sprite.setimage(img);
}


PersonObject::~PersonObject()
{
  //dtor
}

void PersonObject::DoLogic()
{
  FPS = 30; //change to game's FPS
  currentFrames++;
  switch(stage)
  {
    case 0: //Running
      posX = initialPosX + speedX * (currentFrame / FPS);
      break;
    case 1: //Jumping
      if(posY == 0)
        stage = 0;
      else
      {
        posX = initialPosX + speedX * (currentFrame / FPS);
        posY = initialPosY + speedY * (currentFrame / FPS) - 1/2 * accelerationY * accelerationY * (currentFrame / FPS);
      }
      break;
  }
}

void PersonObject::Draw(GraphicWindow *window)
{
    window->GetSFWindow()->draw(sprite);
}

void PersonObject::Jump()
{
  stage = 1; //change the stage to jumping
  speedY = 2;
}


 
