#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class OnHitSubcomponent {

public:
    virtual OnHitSubcomponent::~OnHitSubcomponent()

    OnHitSubcomponent(void);
    void _canAttack(Actor *, Actor *)const;
    void readfromJSON(Json::Value &);
    void writetoJSON(Json::Value &)const;
    void getSubcomponentName();
};
