#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
// Function to get the computer's choice
int getComputerChoice() {
    // Generate a random number between 0 and 2
    return std::rand() % 3;
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    // Choices: 0 for Rock, 1 for Paper, 2 for Scissors
    string choices[] = {"Rock", "Paper", "Scissors"};

    cout << "Welcome to the Rock, Paper, Scissors game!\n";

    while (true) {
        cout << "\nPlease choose (0 - Rock, 1 - Paper, 2 - Scissors, or any other number to quit): ";
        int playerChoice;
        cin >> playerChoice;

        if (playerChoice < 0 || playerChoice > 2) {
            cout << "Invalid choice. Exiting the game.\n";
            break;
        }

        int computerChoice = getComputerChoice();

        cout << "You chose: " << choices[playerChoice] << endl;
        cout << "Computer chose: " << choices[computerChoice] << endl;

        // Compare choices and determine the winner
        if (playerChoice == computerChoice) {
            cout << "It's a tie!\n";
        } else if ((playerChoice == 0 && computerChoice == 2) ||
                   (playerChoice == 1 && computerChoice == 0) ||
                   (playerChoice == 2 && computerChoice == 1)) {
            cout << "You win!\n";
        } else {
            cout << "Computer wins!\n";
        }
    }

    return 0;
}
