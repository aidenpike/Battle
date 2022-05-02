#include <iostream>
#include <string> 
#include <algorithm>

using namespace std;
using std::transform;

//Refer to the prototypes for descriptions on each function!
//Prototypes
void titleScreen(); //Outputs the title and entering START

string start;
string playerOneName, playerTwoName;
char playAgain;
int playerOneHealth, playerTwoHealth;

int main() {
    titleScreen();

    do {
        cout << "Player One, what is your name? ";
        cin >> playerOneName;
        cout << "Player Two, what is your name? ";
        cin >> playerTwoName;
        cout << "Both of you are equipped with a shortsword and chainmail armor. Prepare for battle!\n";

        while ()
        
        cout << "Play again? [Y or N] ";
        cin >> playAgain;
        playAgain = toupper(playAgain);
    } while (playAgain == 'Y');

    cout << "Goodbye!" << endl;
}

void titleScreen(){
    cout << "________                          ___           8  " << endl <<
            "`MMMMMMMb.                        `MM          (M) " << endl <<
            " MM    `Mb           /      /      MM          (M) " << endl <<
            " MM     MM    ___   /M     /M      MM   ____   (M) " << endl <<
            " MM    .M9  6MMMMb /MMMMM /MMMMM   MM  6MMMMb   M  " << endl <<
            " MMMMMMM(  8M'  `Mb MM     MM      MM 6M'  `Mb  M  " << endl <<
            " MM    `Mb     ,oMM MM     MM      MM MM    MM  M  " << endl <<
            " MM     MM ,6MM9'MM MM     MM      MM MMMMMMMM  8  " << endl <<
            " MM     MM MM'   MM MM     MM      MM MM           " << endl <<
            " MM    .M9 MM.  ,MM YM.  , YM.  ,  MM YM    d9 68b " << endl <<
            "_MMMMMMM9' `YMMM9'Yb.YMMM9  YMMM9 _MM_ YMMMM9  Y89 " << endl;
    
    while (start != "START") {
    cout << "Enter START to continue: ";
    cin >> start;
    transform(start.begin(), start.end(), start.begin(),::toupper);

    if (start != "START")
        cout << "Please enter START.\n\n";
    }
}
