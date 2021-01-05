#include"board.h"
#include<iostream>
#include<vector>
#include<string>
#include"spot.h"
#include"entity.h"

board::board(int boardSize){
    //create board
    grid = new vector<vector<spot*>* >;
    vector<spot*>* tempRow;
    spot* tempSpot;
    
    for(int i=0; i<boardSize;i++){
        tempRow = new vector<spot*>;
        for(int j=0; j<boardSize;j++){
            tempSpot = new spot;
            tempSpot->SetPosition(i,j);
            tempRow->push_back(tempSpot);
        }
        grid->push_back(tempRow);
    }
}
vector<vector<spot*>*>* board::GetGrid(){
    return grid;
}
void board::AddNewEntity(){
    //add general entity to a new spot

}
void board::AddNewEntity(entity player){
    //add entity to board at its position
    
}
void board::AddNewEntity(entity player, pair<int,int> position){
    //add entity to board at position specified
    //update position in player also
}
void board::AddNewEntity(entity player, int xPos, int yPos){
    //add entity to board at position specified
    //update position in player also
}
void board::MoveEntity(string direction, entity player){
    //call entity's move funciton
    //update grid
}
void board::PrintGrid(){
    //print grid to console
    for(int i=0; i<grid->size();i++){
        for(int j=0; j<grid->size();j++){
            
            cout <<((grid->at(i))->at(j))->GetDisplayChar()<<" ";
        }
        cout <<endl;
    }
}
