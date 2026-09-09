#include <iostream>

using namespace std;

int main() {
    int secret_number = 7;
    int user_guess = 0;

    cout << "=== Welcome to the Number Guessing Game ===\n";

    // This loop keeps running as long as the user's guess is WRONG
    while (user_guess != secret_number) {
        cout << "Guess the secret number (between 1 and 10): ";
        cin >> user_guess;

        if (user_guess != secret_number) {
            cout << "Wrong guess! Try again.\n\n";
        }
    }

    // The program only reaches this line once the loop breaks (guess is correct)
    cout << "\nCongratulations! You guessed the secret number (" << secret_number << ")!\n";
    return 0;
}
