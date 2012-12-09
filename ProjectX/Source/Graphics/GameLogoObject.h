#ifndef GAMELOGOOBJECT_H
#define GAMELOGOOBJECT_H

#include <Game\GameObject.h>


class GameLogoObject : public GameObject
{
    public:
        GameLogoObject();
        virtual ~GameLogoObject();
        void DoLogic();
        void Draw(GraphicWindow *window);
        bool IsFinished();
    protected:
    private:
        int opacity;
        int currentTime;
        int transitionTime;
        int transitionStepTime;
        int nextTransitionTime;
        float opacitySteps;
        int holdingTime;
        int stage; // 0 = rising, 1 = holding, 2 = falling
        bool isFinished;
        sf::Image img;
        sf::Texture texture;
        sf::Sprite sprite;
};

#endif // GAMELOGOOBJECT_H
