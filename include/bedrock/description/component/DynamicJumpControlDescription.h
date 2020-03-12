#pragma once

#include "ComponentDescription.h"


class DynamicJumpControlDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    ~DynamicJumpControlDescription();
    DynamicJumpControlDescription();
};
