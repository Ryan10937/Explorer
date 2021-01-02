#ifndef EXPLORER_H
#define EXPLORER_H

#include<string>
#include"item.h"
#include"spot.h"

using namespace std;

class entity{

    public:
    //mutators and accessors
    void ShowMap(vector<vector<spot*> > map);
    void Move(string direction, vector<vector<spot*> > map);
    string PromptPlayer(string prompt);
    void Attack(entity* enemy);
    void EquipWeapon(item* weapon);


    private:
    float currentHealth;
    float maxHealth;
    pair<int,int> position;
    item* weapon;
    string faction;


};
#endif