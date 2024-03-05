#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumberGenerator(int& rn) {
    srand(time(0));
    rn = 1 + rand() % 3;
    return rn;
}

int main() {
    int randomnumber=0;
    int userinput;
    int userpoints=0;
    int computerpoints=0;
    cout << "********** Rock - Paper - Scissors | Game **********" << endl;
    cout << "\t     Made By @maliluu (GitHub)\n\n";
    cout << "Rock = 1\nPaper = 2\nScissors = 3\nExit = 0\n\n";
    cout << "Rock, Paper or Scissors: ";
    cin >> userinput;
        while (userinput!=0) {
            RandomNumberGenerator (randomnumber);
            if (userinput==1 && randomnumber==1) {
                cout << "Rock vs. Rock\n";
                cout << "It's a tie.\n";
            }
            if (userinput==1 && randomnumber==2) {
                cout << "Rock vs. Paper\n";
                cout << "You lose :(\n";
                ++computerpoints;
            }
            if (userinput==1 && randomnumber==3) {
                cout << "Rock vs. Scissors\n";
                cout << "You win :)\n";
                ++userpoints;
            }
            if (userinput==2 && randomnumber==2) {
                cout << "Paper vs. Paper\n";
                cout << "It's a tie.\n";
            }
            if (userinput==2 && randomnumber==1) {
                cout << "Paper vs. Rock\n";
                cout << "You win :)\n";
                ++userpoints;
            }
            if (userinput==2 && randomnumber==3) {
                cout << "Paper vs. Scissors\n";
                cout << "You lose :(\n";
                ++computerpoints;
            }
            if (userinput==3 && randomnumber==3) {
                cout << "Scissors vs. Scissors\n";
                cout << "It's a tie.\n";
            }
            if (userinput==3 && randomnumber==1) {
                cout << "Scissors vs. Rock\n";
                cout << "You lose :(\n";
                ++computerpoints;
            }
            if (userinput==3 && randomnumber==2) {
                cout << "Scissors vs. Paper\n";
                cout << "You win :)\n";
                ++userpoints;
            }
            cout << "\nRock = 1\nPaper = 2\nScissors = 3\nExit = 0\n\n";
            cout << "Rock, Paper or Scissors: ";
            cin >> userinput;
    
            if (userinput==0) {
                cout<< "***Thank You For Playing <3***\n";
                cout << "Computer:\t\t\tPlayer:\n";
                cout << computerpoints << "\t\t\t\t" << userpoints << endl;
                if (computerpoints > userpoints)
                    cout << "You lost!\n";
                if (computerpoints < userpoints)
                    cout << "You are the winner !!\n";
                if (computerpoints == userpoints)
                    cout << "It's a tie!\n";
                break;
            }
        }
    return 0;
}
