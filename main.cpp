#include<iostream>
#include<string>
#include<vector>

#include"CreateBoard.h"
#include"entity.h"

using namespace std;

int main(){
    int boardSize = 20;
    cout <<"Hello World"<<endl;
    vector<vector<spot*>* >* board = CreateBoard(boardSize);
    entity* player = new entity;

    for(int i=0; i<boardSize;i++){
        for(int j=0; j<boardSize;j++){
            
            cout <<((board->at(i))->at(j))->GetDisplayChar()<<" ";
        }
        cout <<endl;
    }

    string moveChar;
    cout << "Use WASD to move" << endl;
    for(int i=0;i<8;i++){
        moveChar = player->PromptPlayer(" ");
        player->Move(moveChar,board);
        player->ShowMap(board);
    }
    return 0;
}