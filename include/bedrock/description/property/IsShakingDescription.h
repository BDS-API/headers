#pragma once

#include "PropertyDescription.h"


class IsShakingDescription : PropertyDescription {

public:
    ~IsShakingDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    IsShakingDescription();
};
