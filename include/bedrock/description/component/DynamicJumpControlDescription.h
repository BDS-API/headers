#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class DynamicJumpControlDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~DynamicJumpControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    DynamicJumpControlDescription();
};
