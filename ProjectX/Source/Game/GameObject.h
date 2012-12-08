#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <Graphics/GraphicWindow.h>

class GameObject
{
    public:
        GameObject();
        virtual ~GameObject();
        virtual void DoLogic(){};
        virtual void Draw(GraphicWindow *window){};
    protected:
    private:
};

#endif // GAMEOBJECT_H
