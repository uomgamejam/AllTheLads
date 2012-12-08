#ifndef GRAPHICWINDOW_H
#define GRAPHICWINDOW_H

#include <SFML/Graphics.hpp>

class GraphicWindow
{
    public:
        GraphicWindow(int width, int height, int bpp, std::string title);
        virtual ~GraphicWindow();
        sf::RenderWindow* GetSFWindow();
        void SetClosing();
        bool IsClosing();
    protected:
    private:
        sf::RenderWindow window;
        int winW;
        int winH;
        int winBpp;
        std::string winTitle;
        bool isClosing;
};

#endif // GRAPHICWINDOW_H
