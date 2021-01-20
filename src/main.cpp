#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;

void menu()
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
                                    break;
                                }
                    }
    }
}
}

int main()
{
        //if click save sprite to

        int input;

        int board[8][8]=
        {{-1,-2,-3,-4,-5,-3,-2,-1},
        {-6,-6,-6,-6,-6,-6,-6,-6},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {6,6,6,6,6,6,6,6},
        {1,2,3,4,5,3,2,1}};
        
        int BLOCK= 87;

        int width = 8 * BLOCK;
        int height = 8 * BLOCK;

         for (int j = 0; j < 8; j++)
        {
            for (int i = 0; i < 8; i++)
            {
                std::cout<<board[j][i];
            }
        }

        RenderWindow window(VideoMode(width, height), "Chess");

        Texture chessboard_o,bp,wp,bk,wk,bkn,wkn,bq,wq,bb,wb,br,wr;

        chessboard_o.loadFromFile("chessboard 87x87.png");
        bp.loadFromFile("BP.png");wp.loadFromFile("WP.png");
        bk.loadFromFile("BK.png");wk.loadFromFile("WK.png");
        bkn.loadFromFile("BKN.png");wkn.loadFromFile("WKN.png");
        bq.loadFromFile("BQ.png");wq.loadFromFile("WQ.png");
        bb.loadFromFile("BB.png");wb.loadFromFile("WB.png");
        br.loadFromFile("BR.png");wr.loadFromFile("WR.png");

        Sprite chessboard(chessboard_o);
        Sprite bpawn(bp),wpawn(wp),bking(bk),wking(wk),bknight(bkn),wknight(wkn);
        Sprite bqueen(bq),wqueen(wq),bbishop(bb),wbishop(wb),brook(br),wrook(wr);

        chessboard.setTexture(chessboard_o);
        bpawn.setTexture(bp);wpawn.setTexture(wp);
        bking.setTexture(bk);wking.setTexture(wk);
        bknight.setTexture(bkn);wknight.setTexture(wkn);
        bqueen.setTexture(bq);wqueen.setTexture(wq);
        bbishop.setTexture(bb);wbishop.setTexture(wb);
        brook.setTexture(br);wrook.setTexture(wr);


    while(window.isOpen())
    {
        Vector2i posf = Mouse::getPosition(window);
            int x = posf.x/BLOCK;
            int y = posf.y/BLOCK;

        Vector2i pos = Mouse::getPosition(window);
            int c = pos.c/BLOCK;
            int d = pos.d/BLOCK;

        Event e;
            while (window.pollEvent(e)) 
                {
                if (e.type == Event::Closed) 
                    window.close();
                }
            
                          
    window.clear();
    window.draw(chessboard);
    for (int j = 0; j < 8; j++)
        {
            for (int i = 0; i < 8; i++)
            {
                if(board[j][i]==-6){bpawn.setPosition(i*BLOCK, j*BLOCK);
                window.draw(bpawn);
                }
                if(board[j][i]==-4){bking.setPosition(i*BLOCK, j*BLOCK);
                window.draw(bking);
                }
                if(board[j][i]==-5){bqueen.setPosition(i*BLOCK, j*BLOCK);
                window.draw(bqueen);
                }
                if(board[j][i]==-1){brook.setPosition(i*BLOCK, j*BLOCK);
                window.draw(brook);
                }
                if(board[j][i]==-3){bbishop.setPosition(i*BLOCK, j*BLOCK);
                window.draw(bbishop);
                }
                if(board[j][i]==-2){bknight.setPosition(i*BLOCK, j*BLOCK);
                window.draw(bknight);
                }



                if(board[j][i]==6){wpawn.setPosition(i*BLOCK, j*BLOCK);
                window.draw(wpawn);
                }
                if(board[j][i]==4){wking.setPosition(i*BLOCK, j*BLOCK);
                window.draw(wking);
                }
                if(board[j][i]==5){wqueen.setPosition(i*BLOCK, j*BLOCK);
                window.draw(wqueen);
                }
                if(board[j][i]==1){wrook.setPosition(i*BLOCK, j*BLOCK);
                window.draw(wrook);
                }
                if(board[j][i]==3){wbishop.setPosition(i*BLOCK, j*BLOCK);
                window.draw(wbishop);
                }
                if(board[j][i]==2){wknight.setPosition(i*BLOCK, j*BLOCK);
                window.draw(wknight);
                }

            } 
        }

        if (e.type == Event::MouseButtonPressed) 
                    {
                        if (e.mouseButton.button == Mouse::Left) 
                        {
                            input=board[y][x];
                            board[y][x]=0;
                            board[b][a]=input;
                        }
                    }
    window.display();

    }
    return 0;
}