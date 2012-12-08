#include "GameLoop.h"

GameLoop::GameLoop()
{
  const int GRAPHICS_FRAMES_PER_SECOND = 60;
  const int EXTRA_FRAMES_PER_SECOND = 30;
    const int SKIP_TICKS = 1000 / FRAMES_PER_SECOND;

    DWORD next_game_tick = GetTickCount();

    int sleep_time = 0;

    bool game_is_running = true;
    bool run_extra_fps = true;

    while( game_is_running ) {

        if(run_extra_fps)
        {
        update_game();
        run_extra_fps = false;
        }

        else {
        run_extra_fps = false;
        }

        display_game();

        next_game_tick += SKIP_TICKS;
        sleep_time = next_game_tick - GetTickCount();
        if( sleep_time >= 0 ) {
            Sleep( sleep_time );
        }

    }

}

