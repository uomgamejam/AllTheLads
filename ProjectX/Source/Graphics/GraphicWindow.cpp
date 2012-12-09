#include "GraphicWindow.h"

GraphicWindow::GraphicWindow(int width, int height, int bpp, std::string title) :
    window(sf::VideoMode(width, height, bpp), title)
{
    winW = width;
    winH = height;
    winBpp = bpp;
    winTitle = title;
    isClosing = false;
    window.setVerticalSyncEnabled(false);
}

GraphicWindow::~GraphicWindow()
{
    //dtor
}

sf::RenderWindow* GraphicWindow::GetSFWindow()
{

    return &window;

}

void GraphicWindow::SetClosing()
{

    isClosing = true;

}

bool GraphicWindow::IsClosing()
{

    return isClosing;

}
