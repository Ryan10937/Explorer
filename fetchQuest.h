#ifndef FETCH_QUEST_H
#define FETCH_QUEST_H

#include"event.h"
#include"entity.h"
#include"item.h"

using namespace std;

class fetchQuest : public event{

    public:

    private:
    item* deliveryItem;
    item* reward;
    //vector for dialog tree? linear tree?

};
#endif