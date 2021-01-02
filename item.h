#ifndef ITEM_H
#define ITEM_H

#include<string>

using namespace std;

struct item{
    string type;
    int ID;
    bool isOwnedByPlayer;
    int value;
    float damage;
    int durability;
};
#endif