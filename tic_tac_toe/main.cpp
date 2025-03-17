#include <iostream>
#include <array>
#include <tuple>
using namespace std;

const int ROWS = 3;
const int COLS = 3;
const string EMTPY_SPOT = "-";

void runGame();
void initializeGameBoard(array<array<string, 3>, 3>& gameBoard); // Pass by reference
void printCurrentBoard(const array<array<string, 3>, 3>& gameBoard); // Pass by const reference
void getUserInput(bool xTurn, array<array<string, 3>, 3>& gameBoard);
tuple<string, int, int> getAndVerifyUserInput(bool xTurn, array<array<string, 3>, 3>& gameBoard);
void checkWinner(string& Winner, array<array<string, 3>, 3>& gameBoard);
bool boardFull(array<array<string, 3>, 3>& gameBoard);

int main(){
   
    runGame();
    return 0;
}

void runGame(){
    string Winner = "";

    // The game sequence start with X
    bool xTurn = true;
    // initialize game 
    array<array<string, 3>, 3> gameBoard = {{
        {" ", " ", " "}, 
        {" ", " ", " "},
        {" ", " ", " "}
    }};
    initializeGameBoard(gameBoard);
     // show the current game board
    printCurrentBoard(gameBoard);
    while (Winner==""){
        // take user input, verify and place a piece
        getUserInput(xTurn, gameBoard);
        // check if there is winner 
        checkWinner(Winner, gameBoard);
        // print hte current board
        printCurrentBoard(gameBoard);
        xTurn = !xTurn;
    }

    cout <<"The game is finished, the winner is: " << Winner << endl;

    
}

void initializeGameBoard(array<array<string, 3>, 3>& gameBoard){
    for(int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            gameBoard[i][j] = EMTPY_SPOT;
        }
    }
}

void printCurrentBoard(const array<array<string, 3>, 3>& gameBoard){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            cout << gameBoard[i][j] << " ";
        }
        cout << endl;
    }
}

void getUserInput(bool xTurn, array<array<string, 3>, 3>& gameBoard){
    tuple <string, int, int> result = getAndVerifyUserInput(xTurn, gameBoard);
    auto [piece, row, col] = result;
    gameBoard[row][col] = piece;
}


tuple<string, int, int>getAndVerifyUserInput(bool xTurn, array<array<string, 3>, 3>& gameBoard){
    // prompt users to give input 
    int tempRow;
    int tempCol;
    // The edge cases of entered number out of range needs to be handeled. 
    cout << "Please give the row number of your piece. It should be a number between 1 and 3: " << endl;
    cin >> tempRow;
    cout << endl;
    if (tempRow>3 || tempRow <1){
        cout <<"The number you entered is not valid. Please enter a number between 1 and 3. Please start again" << endl;
        return getAndVerifyUserInput(xTurn, gameBoard);
    }
    cout << "Please give the column number of your piece. It should be a number between 1 and 3: " << endl;
    cin >> tempCol;
    cout << endl;
    if (tempCol>3 || tempCol <1){
        cout <<"The number you entered is not valid. Please enter a number between 1 and 3. Please start again" << endl;
        return getAndVerifyUserInput(xTurn, gameBoard);
    }


    // validate if this space is empty for placing the piece 
    if (gameBoard[tempRow-1][tempCol-1] != EMTPY_SPOT){
        cout << "The locaiton you want to put the piece is not empty. Please input another one." << endl;
        return getAndVerifyUserInput(xTurn, gameBoard);
    }

    if (xTurn==true){
        tuple<string, int, int>pieceAndLoc{"X", tempRow - 1, tempCol - 1};
        return pieceAndLoc;
    } else {
        tuple<string, int, int>pieceAndLoc{"O", tempRow -1 , tempCol - 1};
        return pieceAndLoc;
    }

}

void checkWinner(string& Winner, array<array<string, 3>, 3>& gameBoard){
    if(gameBoard[0][0] == gameBoard[0][1] && gameBoard[0][1] == gameBoard[0][2] && gameBoard[0][0]!=EMTPY_SPOT){
        Winner = gameBoard[0][0];
    } else if (gameBoard[1][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[1][2] && gameBoard[1][0]!=EMTPY_SPOT)
    {
        Winner = gameBoard[1][0];
    } else if (gameBoard[2][0] == gameBoard[2][1] && gameBoard[2][1] == gameBoard[2][2] && gameBoard[2][0]!=EMTPY_SPOT){
        Winner = gameBoard[2][0];

    } else if (gameBoard[0][0] == gameBoard[1][0] && gameBoard[1][0] == gameBoard[2][0] && gameBoard[0][0]!=EMTPY_SPOT){
        Winner = gameBoard[0][0];
    } else if (gameBoard[0][1] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][1] && gameBoard[0][1]!=EMTPY_SPOT)
    {
        Winner = gameBoard[0][1];
    } else if (gameBoard[0][2] == gameBoard[1][2] && gameBoard[2][2] == gameBoard[1][2] && gameBoard[0][2]!=EMTPY_SPOT)
    {
        Winner = gameBoard[0][2];
    } else if (gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][2] && gameBoard[0][0]!=EMTPY_SPOT)
    {
        Winner = gameBoard[2][2];
    } else if (gameBoard[0][2] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][0] && gameBoard[0][2]!=EMTPY_SPOT)
    {
        Winner = gameBoard[2][2];
    } else {
        if (boardFull(gameBoard)){
            Winner = "C";
        }
    }   
}

bool boardFull(array<array<string, 3>, 3>& gameBoard){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            if (gameBoard[i][j] == EMTPY_SPOT){
                return false;
            }
        }
    }
    return true;
}