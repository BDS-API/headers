#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class BehaviorTreeDescription : ComponentDescription {

public:
    ~BehaviorTreeDescription();
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    BehaviorTreeDescription();
};
