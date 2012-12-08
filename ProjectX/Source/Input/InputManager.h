#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

#include <Graphics\GraphicWindow.h>

class InputManager
{
    public:
        InputManager();
        virtual ~InputManager();
        void HandleInput(GraphicWindow *window);
    protected:
    private:
};

#endif // INPUTMANAGER_H
