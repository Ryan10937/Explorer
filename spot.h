#ifndef SPOT_H
#define SPOT_H

#include<string>

#include"event.h"

using namespace std;

class spot{

    public:
    //mutators
    //accessors

    //callEvent();

    private:
    event* eventCollection;
    pair<int,int> position;
    string type;
    char displayChar;
    bool hasPlayer;
};




#endif