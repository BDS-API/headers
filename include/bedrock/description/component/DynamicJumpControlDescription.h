#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class DynamicJumpControlDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    ~DynamicJumpControlDescription();
    virtual void getJsonName()const;
    DynamicJumpControlDescription();
};
