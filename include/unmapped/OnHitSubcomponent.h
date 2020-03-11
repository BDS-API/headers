#pragma once

#include "../bedrock/actor/Actor.h"
#include "../json/Value.h"


class OnHitSubcomponent {

public:
    virtual ~OnHitSubcomponent();

    OnHitSubcomponent();
    void _canAttack(Actor *, Actor *)const;
    void readfromJSON(Json::Value &);
    void writetoJSON(Json::Value &)const;
    void getSubcomponentName();
};
