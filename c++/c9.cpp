#include <iostream>
#include <cstdlib>   
#include <ctime>     

using namespace std;

int main() {
    int secretNumber, guess;

     
    srand(time(0));
    secretNumber = rand() % 100 + 1;   

    cout << "?? Welcome to the Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100:" << endl;

    
    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "?? Congratulations! You guessed it right: " << secretNumber << endl;
        }
    } while (guess != secretNumber);

    return 0;
}

