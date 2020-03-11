#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class IsShakingDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~IsShakingDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsShakingDescription();
};
