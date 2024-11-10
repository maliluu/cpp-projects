#include "Hangman.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

string Hangman::Words[10] = { "maria", "marilynn", "cash", "guns", "silver", "gold", "university", "coding", "paul", "fans" }; // Feeding 10 words to the array , best for last

Hangman::Hangman() { // Constructor

    //Random number generator to choose a random word from the array Words
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 10;

    WordLength = Words[randomNumber].length(); // Using the length function from the string library to determine the string's char length

    if (ChosenLetters != nullptr) // Making sure the ChosenLetters pointer is empty
        delete[] ChosenLetters;

    ChosenLetters = new bool[WordLength]; // Dynamic memory allocation

    WordName = Words[randomNumber]; // Putting word chosen in the string wordname

    NumberOfMistakes = 0; // Initializing the number of mistakes to 0

    for (int i = 0; i < WordLength; ++i) { // Initializing the array ChosenLetters to all false
        ChosenLetters[i] = 0;
    }
}

Hangman::~Hangman() { // Destructor to deallocate the dynamic memory allocation
    delete[] ChosenLetters;
}

int Hangman::GetNumberOfMistakes() const { // Get function for the number of mistakes
    return NumberOfMistakes;
}

bool Hangman::CheckValue() { // Function to make sure the letters form the wordname array match the letter inputted by the user 
    bool found = false; // Value to track if letter is found
    for (int i = 0; i < WordLength; ++i) {
    if (WordName[i] == Letter) { // If the input matches the index in the word, input true inside the index of array ChosenLetters
        ChosenLetters[i] = true; // Set value to true if letter is found
        found = true;
        }
    }
    return found; // Returns true if letter is found otherwise retuns false
}

bool Hangman::IsWordComplete() const { // Function to check if the word has been completed
    for (int i = 0; i < WordLength; ++i) {
        if (ChosenLetters[i] == false) return false;
    }
    return true;
}

ostream& operator<< (ostream& output, const Hangman& h) { // Overloading output operator 
    for (int i = 0; i < h.WordLength; ++i) {
        if (h.ChosenLetters[i] == true) {
            output << h.WordName[i] << " "; // If correct output the letter and a space
        }
        else output << "_ "; // Otherwise ouput _
    }
    return output;
}

istream& operator>> (istream& input, Hangman& h) { // Overloading input operator
    input >> h.Letter;
    return input;
}

Hangman& Hangman::operator++() { // Overloading increment ++ operator
    NumberOfMistakes++;
    return *this;
}
