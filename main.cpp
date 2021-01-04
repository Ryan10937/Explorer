#include<iostream>
#include<string>
#include<vector>

#include"CreateBoard.h"

using namespace std;

int main(){
    int boardSize = 40;
    cout <<"Hello World"<<endl;
    vector<vector<spot*>* >* board = CreateBoard(boardSize);
    
    here(3);


    for(int i=0; i<boardSize;i++){
        for(int j=0; j<boardSize;j++){
            cout <<((board->at(i))->at(j))->GetDisplayChar()<<" ";
        }
        cout <<endl;
    }
    string moveChar;
    for(int i=0;i<8;i++){
        cout <<"Use arrow keys to move"<<endl;
        cin >> moveChar;
        cout <<"char was: "<<moveChar<<endl;
    }
    return 0;
}