#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    RenderWindow window(VideoMode(1308, 802), "Chess");

    Texture pozadie_o;
    Texture play_o;
    pozadie_o.loadFromFile("chessback.jpg");
    play_o.loadFromFile("play_button.png");

    Sprite pozadie;
    Sprite play;
    pozadie.setTexture(pozadie_o);
    play.setTexture(play_o);
    play.setPosition(584, 450);

    while(window.isOpen())
    {
         Event e;
            while (window.pollEvent(e)) 
                {
                if (e.type == Event::Closed) 
                    window.close();
                }
    window.clear();
    window.draw(pozadie);
    window.draw(play);
    window.display();
    }
}