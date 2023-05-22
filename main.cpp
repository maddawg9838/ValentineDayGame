#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void play ();
void game ();
void display ();

//Function Main
int main()
{
play ();
game ();
display();
return(0);
}


//Function Play
void play ()
{
char decision;

cout << "Let’s Play a Game!" << endl;
cout << "Do you wanna play? (Y for yes or N for no)" << endl;
cin >> decision;


    while(decision != 'Y' && decision != 'y' && decision != 'N' && decision != 'n' )
    {
        cout << "Can you even spell? Try again" << endl;
        cin >> decision;
        
        if(decision == 'Y' || decision == 'y')
        {
            cout << "Yay!" << endl;
        }
        else if (decision == 'N' || decision == 'n')
        {
            cout << "Too bad. We are gonna play anyway" << endl;
        }
    }

    cout << "We are gonna play hangman" << endl;
    cout << "Try and guess the statement" << endl << endl;
}

//Function Game
void game ()
{
    char letter, letter1 = '_', letter2 = '_', letter3 = '_', letter4 = '_', letter5 = '_', letter6 = '_', letter7 = '_', letter8 = '_';
    string statement;
    int letters = 0;
    bool win = false;
    
    cout << letter1 << " " << letter2 << letter3 << letter4 << letter5 << " " << letter6 << letter7 << letter8 << "!" << endl;
    cout << "Well…give it a go and guess a letter (use all capital letters or I will judge you for not correctly reading this message" << endl;
    cin >> letter;
    
    while (win == false)
    {
        switch (letter)
        {
            case 'I': {
                letter1 = 'I';
                cout << "Goodjob!" << endl;
                letters++;
                break;
            }
            case 'L':
            {
                letter2 = 'L';
                cout << "Goodjob!" << endl;
                letters++;
                break;
            }
              
            case 'O':
            {
                letter3 = 'O';
                letter7 = 'O';
                cout << "Double Goodjob!" << endl;
                letters+= 2;
                break;
            }
             
            case 'V':
            {
                letter4 = 'V';
                cout << "Goodjob!" << endl;
                letters++;
                break;
            }
           
            case 'E':
            {
                letter5 = 'E';
                cout << "Goodjob!" << endl;
                letters++;
                break;
            }
          
            case 'Y':
            {
                letter6 = 'Y';
                cout << "Goodjob!" << endl;
                letters++;
                break;
            }
           
            case 'U':
            {
                letter8 = 'U';
                cout << "Goodjob!" << endl;
                letters++;
                break;
            }
              
            default:
            {
                cout << "Guess the right letter or read the instructions correctly" << endl;
                cout << "Go ahead. Guess again. This time make it a good one" << endl;
                cin >> letter;
            }
                
        }
        
        if(letters == 8)
        {
            win = true;
            cout << "You Guessed It!" << endl;
            cout << letter1 << " " << letter2 << letter3 << letter4 << letter5 << " " << letter6 << letter7 << letter8 << "!" << endl;
            
            cout << "Wait, really? Thanks!" << endl << endl;
            cout << "Just Kidding :)" << endl;
        }
        else
        {
            cout << letter1 << " " << letter2 << letter3 << letter4 << letter5 << " " << letter6 << letter7 << letter8 << "!" << endl;
            cout << "Keep Guessing. You Got This!" << endl;
            cin >> letter;
        }
    }
}

    //Function Display
    void display()
{
        int n,row,col;
        n = 6;
        cout << " I Love You <3 " << endl;
        for(row=0;row<n;row++)
        {
          for(col=0;col<n+1;col++)
             if ((row==0 && col%3!=0) || (row==1 && col%3==0) || (row-col==2) || (row+col==8))
                  cout<<("*");
                else
                  cout<<(" ");

            cout<<("\n");
        }
    }


