#ifndef MENUBUTTON_H
#define MENUBUTTON_H

#include <string>
#include <Game\GameObject.h>

class MenuButton : public GameObject
{
    public:
        MenuButton(std::string caption, int x, int y);
        virtual ~MenuButton();
        void Draw(GraphicWindow *window);
    protected:
    private:
        sf::Image img;
        sf::Texture texture;
        sf::Sprite sprite;
};

#endif // MENUBUTTON_H
