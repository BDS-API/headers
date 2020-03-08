#pragma once

#include "../../../json/Value"


class BehaviorTreeDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    BehaviorTreeDescription::~BehaviorTreeDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    BehaviorTreeDescription(void);
};
