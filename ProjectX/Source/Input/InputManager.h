#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

#include <Graphics\GraphicWindow.h>

class InputManager
{
    public:
        InputManager(GameStateManager* gsm);
        virtual ~InputManager();
        void HandleInput(GraphicWindow *window);
    protected:
    private:
        GameStateManager *gameStateMan;
};

#endif // INPUTMANAGER_H
