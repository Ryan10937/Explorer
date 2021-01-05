#include<iostream>
#include<string>
#include<vector>

#include"CreateBoard.h"
#include"entity.h"
#include"board.h"

using namespace std;

int main(){
    int boardHeight = 20;
    int boardWidth = 50;
    char playerChar = 'O';

    //vector<vector<spot*>* >* board = CreateBoard(boardSize);
    entity* player = new entity;
    player->SetDisplayChar(playerChar);
    board* gameMap = new board(boardHeight,boardWidth);
    here(1);
    gameMap->AddNewEntity(player,10,15);
    gameMap->PrintGrid();

    

    bool isQuitting = false;
    int loopBreaker = 0;
    cout << "Use WASD to move" << endl;
    while(isQuitting == false){
        isQuitting = gameMap->PromptPlayer(" ",player);
        here(2);
        gameMap->PrintGrid();

        loopBreaker++;
        if(loopBreaker > 2000){
            cout <<"Loop break triggered" << endl;
            break;
        }
    }
    return 0;
}