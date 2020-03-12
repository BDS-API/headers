#pragma once

#include "../bedrock/actor/Actor.h"
#include "../json/Value.h"


class OnHitSubcomponent {

public:
    ~OnHitSubcomponent();
    void _canAttack(Actor *, Actor *)const;
    OnHitSubcomponent();
    void writetoJSON(Json::Value &)const;
    void getSubcomponentName();
    void readfromJSON(Json::Value &);
};
