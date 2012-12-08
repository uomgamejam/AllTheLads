#ifndef ATLLOGOOBJECT_H
#define ATLLOGOOBJECT_H

#include <Game\GameObject.h>


class ATLLogoObject : public virtual GameObject
{
    public:
        ATLLogoObject();
        virtual ~ATLLogoObject();
        void DoLogic();
        void Draw(GraphicWindow *window);
    protected:
    private:
        int opacity;
        int currentTime;
        int transitionTime;
        int transitionStepTime;
        int holdingTime;
        int stage; // 0 = rising, 1 = holding, 2 = falling
        sf::Texture texture;
        sf::Sprite sprite;
};

#endif // ATLLOGOOBJECT_H
