#include<iostream>
#include<string>
#include<vector>

#include"CreateBoard.h"
#include"entity.h"
#include"board.h"

using namespace std;

int main(){
    int boardSize = 20;

    //vector<vector<spot*>* >* board = CreateBoard(boardSize);
    entity* player = new entity;
    player->SetDisplayChar('O');
    board* gameMap = new board(boardSize);

    gameMap->AddNewEntity(player,18,1);
    gameMap->PrintGrid();

    bool isQuitting = false;
    int loopBreaker = 0;
    cout << "Use WASD to move" << endl;
    while(isQuitting == false){
        isQuitting = gameMap->PromptPlayer(" ",player);
        gameMap->PrintGrid();

        loopBreaker++;
        if(loopBreaker > 2000){
            cout <<"Loop break triggered" << endl;
            break;
        }
    }
    return 0;
}