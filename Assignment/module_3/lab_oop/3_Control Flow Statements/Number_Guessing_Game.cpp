#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class NumberGuessingGame 
{
private:
    int secretNumber;
    int guess;

public:
    void startGame() 
	{
        srand(time(0));
        secretNumber = rand() % 100 + 1;
        guess = 0;

        cout << "===============================" << endl;
        cout << "     Number Guessing Game      " << endl;
        cout << "===============================" << endl;
        cout << "Guess the number between 1 and 100!" << endl;

        while (guess != secretNumber) 
		{
            cout << "\nEnter your guess: ";
            cin >> guess;

            if (guess > secretNumber) 
			{
                cout << "Too high! Try again." << endl;
            } 
            else if (guess < secretNumber) 
			{
                cout << "Too low! Try again." << endl;
            } 
            else 
			{
                cout << "Congratulations! You guessed it right!" << endl;
                cout << "The secret number was: " << secretNumber << endl;
            }
        }
    }
};

int main() {
    NumberGuessingGame game;
    game.startGame();
}

