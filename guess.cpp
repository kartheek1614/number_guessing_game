
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 
    int numberToGuess = rand() % 100 + 1; 
    int userGuess;

    cout << "=== Number Guessing Game ===" << endl;

    do {
        cout << "Enter your guess (1-100): ";
        cin >> userGuess;

        if (userGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number." << endl;
        }

    } while (userGuess != numberToGuess);

    return 0;
}
