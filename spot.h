#ifndef SPOT_H
#define SPOT_H

#include<string>

#include"event.h"
#include"iAmHere.h"
#include"entity.h"

using namespace std;

class spot{

    public:
    //constructor
    spot();
    //mutators
    //accessors
    char GetDisplayChar();
    void SetDisplayChar(char displayChar);
    event* GetEventCollection();
    void SetEventCollection(event* eventCollection);
    pair<int,int> GetPosition();
    void SetPosition(pair<int,int> position);
    void SetPosition(int xPos, int yPos);
    string GetType();
    void SetType(string type);
    bool GetHasPlayer();
    void SetHasPlayer(bool hasPlayer);

    //callEvent();

    private:
    char displayChar;
    event* eventCollection;
    pair<int,int> position;
    string type;
    bool hasPlayer;
    entity* player;
};




#endif