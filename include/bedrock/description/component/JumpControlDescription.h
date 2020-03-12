#pragma once

#include "ComponentDescription.h"


class JumpControlDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    ~JumpControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    JumpControlDescription();
};
