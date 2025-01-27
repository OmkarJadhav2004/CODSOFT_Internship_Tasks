// Number Guessing Game
#include<iostream>         // Header file for input output stream
#include<cstdlib>          // Header File used for 'rand()' and 'srand()' function 
#include<ctime>            // Header File used for time() function
using namespace std;

class NumberGuess
{
    public:               // Public Access Specifier
        int iNum; 
        int iTries;
        int iGuess;

    NumberGuess(int x)    // Parameterized Constructor
    {
        iNum = x;         //-------------------------------
        iTries = 0;       //Characteristics Initialization
        iGuess = 0;       //-------------------------------
    }

    void Guessfunc()
    {
        cout<<"---------------Number Guessing Game---------------\n";

        do
        {
            cout<<"Enter the Guess Number from (1 - 100) : ";
            cin>>iGuess;
            iTries++;

            if(iGuess < 1 || iGuess > 100)          // Filter
            {
                cout<<"Please Enter the Guess between the range\n";
                break;
            }
            if(iGuess > iNum)
            {
                cout<<"Too High Guess!\n";
            }
            else if(iGuess < iNum)
            {
                cout<<"Too Low Guess!\n";
            }
            else
            {
                cout<<"Correct Guess\n";
                cout<<"Number of Tries to guess the Number are : "<<iTries<<"\n";
            }

        }while(iGuess != iNum);
        cout<<"--------------------------------------------------\n";
    }

};

int main()
{
    int iRandNum = 0;

    srand(time(NULL));              // srand(time()) function used to set the seed or condition for rand function, here seed is current time

    iRandNum = (rand() % 100)+1;    // rand() function with this particular condition is used to generate a random number between (1 - 100)

    NumberGuess nobj(iRandNum);     // object creation
    
    nobj.Guessfunc();               // function call using object

    return 0;
}