#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int TOTAL_LETTERS = 8;
const string SECRET_PHRASE = "ILoveYou";

void play();
void game();
void displayHeart();

int main() {
    play();
    return 0;
}

void play () {
    char decision;
    cout << "Let’s Play a Game!" << endl;   
    cout << "Do you wanna play? (Y for yes or N for no)" << endl;
    cin >> decision;


    while(decision != 'Y' && decision != 'y')
    {
        cout << "Too bad. We are going to play anyways!" << endl;
        break;
    }

    game();
}

void game() {
    vector<char> guessed(TOTAL_LETTERS, '_');
    int correctGuesses = 0;
    
    cout << "Guess the statement!" << endl;
    
    while (correctGuesses < TOTAL_LETTERS) {
        char letter;
        for (char c : guessed) {
            cout << c << ' ';
        }
        cout << "Guess a letter: ";
        cin >> letter;
        letter = toupper(letter);
        
        // Check for the letter in the secret phrase
        bool found = false;
        for (size_t i = 0; i < SECRET_PHRASE.length(); i++) {
            if (toupper(SECRET_PHRASE[i]) == letter && guessed[i] == '_') {
                guessed[i] = letter;
                correctGuesses++;
                found = true;
                cout << "Good job!" << endl;
            }
        }
        
        if (!found) {
            cout << "Try again!" << endl;
        }

        if (correctGuesses == TOTAL_LETTERS) {
            cout << "You guessed it! The phrase is: " << SECRET_PHRASE << endl;
            break;
        }
    }
    displayHeart();
}

//Function Display displays a heart out of astericks
void displayHeart()
{
    cout << " I Love You <3 " << endl;
    for (int row = 0; row < 6; row++) {
        for(int col = 0; col < 6; ++col) {
            if ((row == 0 && col % 3 != 0) || (row == 1 && col % 3 == 0) || (row - col == 2) || (row + col == 8)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
