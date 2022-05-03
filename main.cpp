#include <iostream>
#include <string> 
#include <algorithm>

using namespace std;
using std::transform;

//Refer to the prototypes for descriptions on each function!
//Prototypes
void titleScreen(); //Outputs the title and entering START
void playerOneMath(); //Player One Math
void playerTwoMath(); //Player Two Math
void winner(); //Check who won

string start;
string playerOneName, playerTwoName;
char playAgain;
int playerOneHealth = 10, playerTwoHealth = 10, 
    playerOneArmor = 10, playerTwoArmor = 10;
int playerOneOption, playerTwoOption;
bool fightLoop = true;

int main() {
    titleScreen();
    srand(int(time(0)));

    do {
        cout << "Player One, what is your name? ";
        cin >> playerOneName;
        cout << "Player Two, what is your name? ";
        cin >> playerTwoName;
        cout << "Both of you are equipped with a shortsword and chainmail armor. Begin battle!\n";
        
        while (fightLoop) {
            playerOneMath();
            playerTwoMath();
            winner();
            
            if (playerOneHealth <= 0 || playerTwoHealth <= 0)
                fightLoop = false;
    }
        
        cout << "Play again? [Y or N] ";
        cin >> playAgain;
        playAgain = toupper(playAgain);
        playerOneHealth = 10, playerTwoHealth = 10;
        fightLoop = true;
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
}

void playerOneMath(){    
    cout << "[" << playerOneName << "] (Armor: " << playerOneArmor << "/10 | HP: " << playerOneHealth << "/10)" << endl;
    
    int playerDamage = 1 + rand() % (3 + 1 - 1);
    int playerRepair = 1 + rand() % (2 + 1 - 1);
    
    cout << "\t1. Attack\n\t2. Repair Armor";
    cin >> playerOneOption;

    //Change to switch if options > 2
    if (playerOneOption == 1){
        cout << playerOneName << " did " << playerDamage << " damage!" << endl;
        
        if (playerTwoArmor > 0)
            playerTwoArmor = playerTwoArmor - playerDamage; 
        else if (playerTwoArmor <= 0){
            playerTwoArmor = 0;
            playerTwoHealth = playerTwoHealth - playerDamage; 
        }
    }
    else if (playerOneOption == 2)
}

void playerTwoMath(){    
    cout << "[" << playerTwoName << "] (Armor: " << playerTwoArmor << "/10 | HP: " << playerTwoHealth << "/10)" << endl;
    
    int playerDamage = 1 + rand() % (3 + 1 - 1);

    cout << "\t1. Attack\n\t2. Repair Armor";
    cin >> playerTwoOption;

    //Change to switch if options > 2
    if (playerTwoOption == 1){ 
        cout << playerTwoName << " did " << playerDamage << " damage!" << endl;

        if (playerOneArmor > 0)
            playerOneArmor = playerOneArmor - playerDamage; 
        else if (playerOneArmor <= 0){
            playerOneArmor = 0;
            playerOneHealth = playerOneHealth - playerDamage;
        }
    }
}

void winner(){
    if (playerOneHealth > 0 && playerTwoHealth <= 0)
        cout << "Player One wins!" << endl;
    else if (playerTwoHealth > 0 && playerOneHealth <= 0)
        cout << "Player Two wins!" << endl;
}
