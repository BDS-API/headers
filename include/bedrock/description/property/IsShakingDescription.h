#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class IsShakingDescription : PropertyDescription {

public:
    virtual void serializeData(Json::Value &)const;
    ~IsShakingDescription();
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    IsShakingDescription();
};
