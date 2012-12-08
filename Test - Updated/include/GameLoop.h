#ifndef GAMELOOP_H
#define GAMELOOP_H

#include <windows.h>
#include <Person.h>

class GameLoop
{
    public:
        GameLoop();
        void DoGameLoop();
        void DoPhysics();
    protected:
    private:
        Person mo;
};

#endif // GAMELOOP_H
