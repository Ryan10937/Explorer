#include<vector>
#include<iostream>
#include"spot.h"
#include"iAmHere.h"


using namespace std;


vector<vector<spot*>* >* CreateBoard(int boardSize){

    vector<vector<spot*>* >* board = new vector<vector<spot*>* >;
    vector<spot*>* tempRow;
    spot* tempSpot;
    
    
    here(1);
    
    
    here(2);
    for(int i=0; i<boardSize;i++){
        tempRow = new vector<spot*>;
        for(int j=0; j<boardSize;j++){
            tempSpot = new spot;
            tempSpot->SetPosition(i,j);
            tempRow->push_back(tempSpot);
        }
        board->push_back(tempRow);
    }
    here(board->size());
    ((board->at(20))->at(20))->SetDisplayChar('R');

    return board;

}