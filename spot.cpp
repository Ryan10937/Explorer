#include"spot.h"
#include<vector>
#include<string>
#include"iAmHere.h"

using namespace std;

spot::spot(){
    displayChar = 'X';
    eventCollection = new event;
    position = make_pair(-1,-1);
    type = "noType";
    hasPlayer = false;
}

char spot::GetDisplayChar(){
    return displayChar;
}
void spot::SetDisplayChar(char displayChar){
    this->displayChar = displayChar;
}
event* spot::GetEventCollection(){
    return eventCollection;
}
void spot::SetEventCollection(event* eventCollection){
    this->eventCollection = eventCollection;
}
pair<int,int> spot::GetPosition(){
    return position;
}
void spot::SetPosition(pair<int,int> position){
    this->position = position;
}
void spot::SetPosition(int xPos, int yPos){
    this->position.first = xPos;
    this->position.second = yPos;
}
string spot::GetType(){
    return type;
}
void spot::SetType(string type){
    this->type = type;
}
bool spot::GetHasPlayer(){
    return hasPlayer;
}
void spot::SetHasPlayer(bool hasPlayer){
    this->hasPlayer = hasPlayer;
}