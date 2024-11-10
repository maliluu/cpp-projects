// Maria Reaidy 20223019
// Mari Lynn Yammine 20231510

#include <iostream> 
#include "Hangman.h"
using namespace std;

int main() {
char playagain; // Declaring user input variable to play

do {
    Hangman hangman; // Creating a Hangman object
    char character; // User letter input

while (hangman.GetNumberOfMistakes() < 6) { //  Limiting number of mistakes
    cout << "Enter Lowercase Letter: ";
    cin >> hangman;

    // If letter inputted matches the word, don't increment the number of mistakes
    if (hangman.CheckValue() == 1) {
    cout << hangman << ": # of mistakes: " << hangman.GetNumberOfMistakes() << endl << endl;

    // Breaking out of while loop if the word is complete
    if (hangman.IsWordComplete() == 1) {
    break;
        }
    }
    else {
        ++hangman;
        cout << hangman << ": # of mistakes: " << hangman.GetNumberOfMistakes() << endl << endl;
    }
}

// Check result and give respective output
    if (hangman.IsWordComplete() == 1) {
    cout << endl << "Congratulations! You won the game." << endl;
    }
    else {
    cout << endl << "Sorry! You lost the game." << endl;
}

    // Asking user if they want to replay the game
    cout << "Would you like to play again? (Y or N): ";
    cin >> playagain;
    system("cls"); // Clearing the text on the screen for a cleaner output

    } while (playagain == 'Y'); // Looping as long as the user input is Y

return 0;

}
