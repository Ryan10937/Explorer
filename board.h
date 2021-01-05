#include<iostream>
#include<vector>
#include<string>
#include"spot.h"
#include"entity.h"

using namespace std;

class board{

    public:
    board(int boardSize);
    vector<vector<spot*>*>* GetGrid();
    void AddNewEntity();
    void AddNewEntity(entity player);
    void AddNewEntity(entity player, pair<int,int> position);
    void AddNewEntity(entity player, int xPos, int yPos);
    void MoveEntity(string direction, entity player);
    void PrintGrid();
    

    private:
    vector<vector<spot*>*>* grid;
};