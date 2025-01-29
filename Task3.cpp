// Tic Tac Toe Game
#include<iostream>
#include<ctime>

using namespace std ;

class TicTacToe
{
    public:
        char *spaces;
        char player1;
        char player2;

        TicTacToe(char *i, char x, char y)
        {
            spaces = i;
            player1 = x;
            player2 = y;
        }
        void drawBoard()
        {
            cout<<"\n";
            cout<<"     |     |     "<<"\n";
            cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"  "<<"\n";
            cout<<"_____|_____|_____"<<"\n";
            cout<<"     |     |     "<<"\n";
            cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<"  "<<"\n";
            cout<<"_____|_____|_____"<<"\n";
            cout<<"     |     |     "<<"\n";
            cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<"  "<<"\n";
            cout<<"\n";
        }

        void player1Move()
        {
            int number;
            do{
                cout<<"Enter a spot to place a marker X (1-9) :";
                cin>>number;
                number--;
                if(spaces[number] == ' ')
                {
                    spaces[number] = player1;
                    break;
                }

            }while(!number > 0 || !number < 8);
        }

        void player2Moves()
        {
            int number;
            do{
                cout<<"Enter a spot to place a marker O (1-9) :";
                cin>>number;
                number--;
                if(spaces[number] == ' ')
                {
                    spaces[number] = player2;
                    break;
                }

            }while(!number > 0 || !number < 8);
        }

        bool checkWinner()
        {
            if((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2]))
            {
                spaces[0] == player1 ? cout<<"Player1 Wins\n" : cout<<"Player2 Wins\n";
            }

            else if((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5]))
            {
                spaces[3] == player1 ? cout<<"Player1 Wins\n" : cout<<"Player2 Wins\n";
            }

            else if((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8]))
            {
                spaces[6] == player1 ? cout<<"Player1 Wins\n" : cout<<"Player2 Wins\n";
            }

            else if((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6]))
            {
                spaces[0] == player1 ? cout<<"Player1 Wins\n" : cout<<"Player2 Wins\n";
            }

            else if((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7]))
            {
                spaces[1] == player1 ? cout<<"Player1 Wins\n" : cout<<"Player2 Wins\n";
            }

            else if((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8]))
            {
                spaces[2] == player1 ? cout<<"Player1 Wins\n" : cout<<"Player2 Wins\n";
            }

            else if((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8]))
            {
                spaces[0] == player1 ? cout<<"Player1 Wins\n" : cout<<"Player2 Wins\n";
            }

            else if((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6]))
            {
                spaces[2] == player1 ? cout<<"Player1 Wins\n" : cout<<"Player2 Wins\n";
            }

            else
            {
                return false;
            }
            return true;
        }

        bool checkTie()
        {
        for(int i = 0; i < 9; i++)
        {
            if(spaces[i] == ' ')
            {
                return false;
            }
        }
        cout<<"It's a Tie!\n";
        return true;

        }
};

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
    char player1 = 'X';
    char player2 = 'O';
    bool running  = true;

    TicTacToe tobj(spaces,player1,player2);

    tobj.drawBoard();

    while(running)
    {
        tobj.player1Move();
        tobj.drawBoard();
        if(tobj.checkWinner())
        {
            running = false;
            break;
        }
        else if(tobj.checkTie())
        {
            running = false;
            break;
        }

        tobj.player2Moves();
        tobj.drawBoard();
        if(tobj.checkWinner())
        {
            running = false;
            break;
        }
        else if(tobj.checkTie())
        {
            running = false;
            break;
        }
    }
    cout<<"Thanks for playing\n";

    return 0;
}