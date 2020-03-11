#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class RaidTriggerDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~RaidTriggerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    RaidTriggerDescription();
};
