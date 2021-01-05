#include<vector>
#include<iostream>
#include"spot.h"
#include"iAmHere.h"


using namespace std;


vector<vector<spot*>* >* CreateBoard(int boardSize){

    vector<vector<spot*>* >* board = new vector<vector<spot*>* >;
    vector<spot*>* tempRow;
    spot* tempSpot;
    
    for(int i=0; i<boardSize;i++){
        tempRow = new vector<spot*>;
        for(int j=0; j<boardSize;j++){
            tempSpot = new spot;
            tempSpot->SetPosition(i,j);
            tempRow->push_back(tempSpot);
        }
        board->push_back(tempRow);
    }
    


    return board;

}