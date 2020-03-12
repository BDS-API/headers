#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class JumpControlDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    ~JumpControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    JumpControlDescription();
};
