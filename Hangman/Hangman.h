// Maria Reaidy 20223019
// Mari Lynn Yammine 20231510

#ifndef Hangman_h
#define Hangman_h
#include <string>
using namespace std;

class Hangman { // Creating a new class called hangman

    // Prototype behaviors for operator overloading using the friend function
    friend ostream& operator<< (ostream&, const Hangman&);
    friend istream& operator>> (istream&, Hangman&);

    private: // Declaring private attributes
        static string Words[10];
        string WordName;
        bool* ChosenLetters;
        char Letter;
        int NumberOfMistakes, WordLength;

    public: // Declaring public behaviors
        Hangman();
        ~Hangman();
        int GetNumberOfMistakes() const;
        bool CheckValue();
        bool IsWordComplete() const;

    // ++ Operator overloading
    Hangman& operator++();
};

#endif
