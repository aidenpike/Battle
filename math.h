#include <iostream>
#include <algorithm>

using namespace std;

//Declaration Section
class Math {
    public:
        Math();
        void titleScreen();
        void compMath();
        void playerOneMath();
        void playerTwoMath();
        int damagePoints;
        int repairPoints;
        int playerChoice;
        int playerOneTurn, playerTwoTurn;
        int actionChoice, playerTypeChoice;
        int playerOneAgility, playerTwoAgility, compAgility;
        int playerOneAtkSpd, playerTwoAtkSpd;
        string playerOneName, playerTwoName;
};

//Implementation Section
Math::Math(){
    playerOneAgility = 0;
    playerTwoAgility = 0;
    playerOneAtkSpd = 0;
    playerTwoAtkSpd = 0;
}

int actionChoice, playerTypeChoice;
string playerOneName, playerTwoName;

void Math::titleScreen(){
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

    cout << "Would you like to play against a:\n [1] CPU\n [2] 2nd Player\n";
    cin >> playerTypeChoice;

    cin.ignore();
    
    if (playerTypeChoice == 1){
        cout << "Player One, enter your name: ";
        getline(cin, playerOneName);
    }
    else if (playerTypeChoice == 2){
        cout << "Player One, enter your name: ";
        getline(cin, playerOneName);
        cout << "Player Two, enter your name: ";
        getline(cin, playerTwoName);
    }
}

void playerOneMath(){

}

void playerTwoMath(){
    
}

void compMath(){
    
}