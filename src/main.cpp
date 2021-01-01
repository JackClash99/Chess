#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
    string chess_board[9][9] = {
        {" ","A ","B ","C ","D ","E ","F ","G ","H "},
        {"1","WR","WK","WB","WK","WQ","WB","WK","WR"},
        {"2","WP","WP","WP","WP","WP","WP","WP","WP"},
        {"3","O ","O ","O ","O ","O ","O ","O ","O "},
        {"4","O ","O ","O ","O ","O ","O ","O ","O "},
        {"5","O ","O ","O ","O ","O ","O ","O ","O "},
        {"6","O ","O ","O ","O ","O ","O ","O ","O "},
        {"7","BP","BP","BP","BP","BP","BP","BP","BP"},
        {"8","BR","BK","BB","BK","BQ","BB","BK","BR"}};

    int a, b, c, d;
    string from, to;
    string input;
    string answer;
    int move_counter=0;

    while (answer!="end")
    {

        for(int row=0;row<9;row++) // riadok = line
        {
            cout<<endl;
            for (int col=0;col<9;col++) // stlpec = column
            {
              cout<<chess_board[row][col]<<"   ";
            }
            cout<<endl;
        }

            cout<< "------------------------------------------"<<endl;
         
            cout<<"Want you end or continue ? ";
            cin >> answer;

        if (answer=="end")
        {
             return 0;
        }
        
            cout<<"move your figure A-H,1-8 together"<<endl;

            bool good_move;
            good_move = false;

        while(!good_move)
        {
            cout<<"from: ";
            cin >> from;

            switch(from[0]) 
            {
                case 'A':b = 1;
                break;
                case 'B':b = 2;
                break;
                case 'C':b = 3;
                break;
                case 'D':b = 4;
                break;
                case 'E':b = 5;
                break;
                case 'F':b = 6;
                break;
                case 'G':b = 7;
                break;
                case 'H':b = 8;
                break;
            }

            switch(from[1]) 
            {
                case '1':a = 1;
                break;
                case '2':a = 2;
                break;
                case '3':a = 3;
                break;
                case '4':a = 4;
                break;
                case '5':a = 5;
                break;
                case '6':a = 6;
                break;
                case '7':a = 7;
                break;
                case '8':a = 8;
                break;
            }

            if(chess_board[a][b][0] == 'W' && move_counter % 2 == 0   ||
               chess_board[a][b][0] == 'B' && move_counter % 2 == 1  )
            {
                good_move = true;
            }
            else
            {
                cout << "It's not your turn."<<endl;
            }
        }

        cout<<"to: ";
        cin>>to;

     

        switch(to[0]) 
        {
            case 'A':d = 1;
            break;
            case 'B':d = 2;
            break;
            case 'C':d = 3;
            break;
            case 'D':d = 4;
            break;
            case 'E':d = 5;
            break;
            case 'F':d = 6;
            break;
            case 'G':d = 7;
            break;
            case 'H':d = 8;
            break;
            default:
            cout<<"Wrong"<<endl;
            break;
        }

        switch(to[1])
        {
            case '1':c = 1;
            break;
            case '2':c = 2;
            break;
            case '3':c = 3;
            break;
            case '4':c = 4;
            break;
            case '5':c = 5;
            break;
            case '6':c = 6;
            break;
            case '7':c = 7;
            break;
            case '8':c = 8;
            break;
            default:
            cout<<"Wrong"<<endl;
            break;
        }
         
        input=chess_board[a][b];
        chess_board[a][b]="0 ";
        chess_board[c][d]=input;
    
        move_counter=move_counter+1;

    }
    return 0;
}