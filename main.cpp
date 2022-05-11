#include <iostream>
#include <algorithm>
#include "Math.h"

using namespace std;

int main(){
    //Declare Objects
    Math title;
    Math playerOneMath;
    Math playerTwoMath;

    char playAgain;
    
    //Output title and get names
    do {
        title.titleScreen(); 

        cout << "Would you like to play again? [Y or N]: ";
        cin >> playAgain;
        playAgain = toupper(playAgain);
    } while (playAgain == 'Y');

    cout << "Goodbye!" << endl;
}