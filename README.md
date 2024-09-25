# Valentine's Day Hangman Game

## Overview
This is a festive take on the classic Hangman game, themed around Valentine's Day. Players will guess letters to reveal a loving statement. The game is designed to be fun and interactive, perfect for celebrating the occasion with friends or loved ones.

## Features
- **Interactive Gameplay**: Players can guess letters to uncover a secret message
- **Encouraging Feedback**: The game provides positive reinforcement for correct guesses.
- **Cute Heart Display**: At the end of the game, a heart is displayed along with a loving message.

## How to Play
1. **Starting the Game**: Run the program, and you will be prompted to play
2. **Guessing**: Enter capital letters to guess the hidden statement
3. **Winning**: Successfully guess all the letters to reveal the loving message!

## Prerequisites
- A C++ compiler (like g++) to run the code.

## How to Run
1. Clone the repository:
```bash
git clone https://github.com/yourusername/ValentineHangman.git
cd ValentineHangman
```
2. Compile the code:
```bash
g++ -o ValentineHangman ValentineHangman.cpp
```
3. Run the game:
```bash
./ValentineHangman
```

## Code Overview
The game is implemented in C++ and consists of functions that handle the welcome message, game, and ending display

### Key Functions
- play() : Displays a welcome message and prompts the player to start.
- game() : Handles the letter guessing logic and checks for wins.
- display() : Shows a heart shape made of asterisks and a loving message

## Author
Madison Humphries
