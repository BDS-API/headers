#pragma once

#include "ComponentDescription.h"


class RaidTriggerDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    ~RaidTriggerDescription();
    virtual void getJsonName()const;
    RaidTriggerDescription();
};
