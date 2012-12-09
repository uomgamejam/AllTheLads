#include "MenuButton.h"

MenuButton::MenuButton(std::string name, int x, int y)
{
    img.loadFromFile("Graphics\\" + name + ".png");
    img.createMaskFromColor(sf::Color(153, 217, 234));
    texture.loadFromImage(img);
    sprite.setTexture(texture);
    sprite.setColor(sf::Color(255, 255, 255, 192));
    sprite.setPosition(x, y);
}

MenuButton::~MenuButton()
{
    //dtor
}

void MenuButton::Draw(GraphicWindow *window)
{

    window->GetSFWindow()->draw(sprite);

}
