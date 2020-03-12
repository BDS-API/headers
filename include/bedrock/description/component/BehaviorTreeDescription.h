#pragma once

#include "ComponentDescription.h"


class BehaviorTreeDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    ~BehaviorTreeDescription();
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    BehaviorTreeDescription();
};
