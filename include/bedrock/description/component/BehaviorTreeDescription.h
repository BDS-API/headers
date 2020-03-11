#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class BehaviorTreeDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~BehaviorTreeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    BehaviorTreeDescription();
};
