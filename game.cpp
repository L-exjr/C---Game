#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I've selected a number between 1 and 100. Try to guess it!\n\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            cout << "Too low! Try a higher number.\n";
        } else if (guess > randomNumber) {
            cout << "Too high! Try a lower number.\n";
        } else {
            cout << "Congratulations! You've guessed the number (" << randomNumber << ") in " << attempts << " attempts!\n";
        }
    } while (guess != randomNumber);

    return 0;
}
