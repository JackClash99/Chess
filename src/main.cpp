#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    int BLOCK = 1; //pixels

        int width = 1308 * BLOCK;
        int height = 802 * BLOCK;

    RenderWindow window(VideoMode(width, height), "Chess");

    Texture pozadie_o, play_o, title_o;
    pozadie_o.loadFromFile("chessback.jpg");
    play_o.loadFromFile("play_button.png");
    title_o.loadFromFile("chesstitle.jpg");

    Sprite pozadie, title, play;
    pozadie.setTexture(pozadie_o);
    play.setTexture(play_o);
    play.setPosition(584, 450);
    title.setTexture(title_o);
    title.setPosition(540, 100);

    while(window.isOpen())
    {
        Vector2i posm = Mouse::getPosition(window);
            int x = posm.x;
            int y = posm.y;
        
        Event e;
            while (window.pollEvent(e)) 
                {
                if (e.type == Event::Closed) 
                    window.close();
                }
                          
    window.clear();
    window.draw(pozadie);
    window.draw(play);
    window.draw(title);
    window.display();

    if (x>=584 and y>=450 and x<=721 and y<=584)
                    {
                        if (e.type == Event::MouseButtonPressed) 
                            {
                            if (e.mouseButton.button == Mouse::Left) 
                                {
                                    return 0;
                                }
                    }
    }
}
}