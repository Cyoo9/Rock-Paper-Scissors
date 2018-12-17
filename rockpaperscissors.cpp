#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void computerMove(int); 
void playerMove(const string&, int&); 
void determineWinner(int, int); 

//rock paper scissors game
int main() {
    srand(time(0));
    string userMove;
    int userMoveVal;
    int compMove;
    cout << "Enter a move. Type \"quit\" to quit: ";
    cin >> userMove;
    while(userMove != "quit") {
    playerMove(userMove, userMoveVal); //user makes a move
    compMove = rand() % 3; // computer makes a move
    computerMove(compMove); //output computer's move
    determineWinner(compMove, userMoveVal); //output winner

    cout << "Enter a move. Type \"quit\" to quit: ";
    cin >> userMove;
    }
    return 0;
}

void computerMove(int compM) {
    if(compM == 0) {
        cout << "Computer played rock!" << endl;
    }
    else if(compM == 1) {
        cout << "Computer played paper!" << endl;
    }
    else  {
        cout << "Computer played scissor!" << endl;
    }
}

void playerMove(const string &userM, int &userMV) {
    if (userM == "rock") {
        userMV = 0;
    }
    else if (userM == "paper") {
        userMV = 1;
    }
    else if (userM == "scissor") {
        userMV = 2;
    } 
}

void determineWinner(int compMove, int userMoveVal) {
    if((compMove == userMoveVal)) {
        cout << "It's a tie!" << endl;
    }
    else if((compMove == 0 && userMoveVal == 2) || 
    (compMove == 1 && userMoveVal == 0) ||  
    (compMove == 2 && userMoveVal == 1)) {
        cout << "Computer Wins!" << endl;
    }
    else {
        cout << "You win!" << endl;
    }
}