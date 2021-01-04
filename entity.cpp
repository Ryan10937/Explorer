#include"entity.h"
#include"item.h"
#include<iostream>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;

entity::entity(){
    this->currentHealth = 100;
    this->maxHealth = 100;
    this->position = make_pair(10,10);
    this->weapon = new item;
    this->faction = "Nature";
}

void entity::ShowMap(vector<vector<spot*>* >* map){
    int width = map->size() + 2;
    
    cout <<setfill('=')<< setw(width) <<"=" <<endl;
    setfill(' '); 
    setw(1);
    
    cout <<"0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9"<<endl;

    for(int i=0;i<map->size();i++){
        for(int j=0;j<(map->at(i))->size();j++){
            cout<< ((map->at(i))->at(j))->GetDisplayChar() << " ";
        }
        cout<<endl;
    }

    
    cout <<setfill('=')<< setw(width) <<"=" <<endl;
    setfill(' '); 
    setw(1);
    
}
void entity::Move(string direction, vector<vector<spot*>* >* map){
    if(direction == "w" ){
        //direction == "up";
        ((map->at(position.second))->at(position.first))->SetDisplayChar('X');
        position.second = position.second - 1;
        ((map->at(position.second))->at(position.first))->SetDisplayChar('O');

    }
    if(direction == "a" ){
        //direction == "left";
        cout<<"first before: " << position.first << endl;
        ((map->at(position.second))->at(position.first))->SetDisplayChar('X');
        position.first = position.first - 1;
        cout<<"first after: " << position.first << endl;
        ((map->at(position.second))->at(position.first))->SetDisplayChar('O');

    }
    if(direction == "s" ){
        //direction == "down";
        ((map->at(position.second))->at(position.first))->SetDisplayChar('X');
        position.second = position.second + 1;
        ((map->at(position.second))->at(position.first))->SetDisplayChar('O');

    }
    if(direction == "d" ){
        //direction == "right";
        ((map->at(position.second))->at(position.first))->SetDisplayChar('X');
        position.first = position.first + 1;
        ((map->at(position.second))->at(position.first))->SetDisplayChar('O');
    }

}
string entity::PromptPlayer(string prompt){
    string answer;
    int width = 20;
    
    
    cout <<setfill('=')<< setw(width) <<"=" <<endl;
    setfill(' '); 
    setw(1);
    

    cout << prompt << endl;
    cin >> answer;

    
    cout <<setfill('=')<< setw(width) <<"=" <<endl;
    setfill(' '); 
    setw(1);
    

    return answer;
}
void entity::Attack(entity* enemy){
    enemy->currentHealth = enemy->currentHealth - weapon->damage;
}
void entity::EquipWeapon(item* weapon){

    this->weapon = weapon;

}




