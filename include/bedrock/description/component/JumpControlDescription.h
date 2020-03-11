#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class JumpControlDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~JumpControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    JumpControlDescription();
};
