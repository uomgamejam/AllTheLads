#include "GameLoop.h"
#include <iostream>


GameLoop::GameLoop() : mo()
{
}

void GameLoop::DoGameLoop()
{


  const int FRAMES_PER_SECOND = 50;
  const int EXTRA_FRAMES_PER_SECOND = 30;
    const int SKIP_TICKS = 1000 / FRAMES_PER_SECOND;

    DWORD next_game_tick = GetTickCount();

    int sleep_time = 0;

    bool game_is_running = true;

    while( game_is_running ) {

            DoPhysics();


        //update_game();
       // display_game();

        next_game_tick += SKIP_TICKS;
        sleep_time = next_game_tick - GetTickCount();
        if( sleep_time >= 0 ) {
            Sleep( sleep_time );
        }

    }

}


void GameLoop::DoPhysics()
{

int gravity = 3;
mo.jumping = false;


    if( mo.jumping == false){
         mo.velocity_y = -80;
         mo.jumping = true;
    }
    if(mo.jumping == true){
       //if(mo.y +mo.velocity_y > 0){// ground.y){
          mo.y = mo.y + mo.velocity_y;
          mo.velocity_y=mo.velocity_y - gravity;
       }


    mo.velocity_x =15;
    mo.x = mo.x + mo.velocity_x;

    std::cout << mo.x <<" " << mo.y <<" ";
}

