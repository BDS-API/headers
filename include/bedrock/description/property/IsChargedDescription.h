#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class IsChargedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    ~IsChargedDescription();
    IsChargedDescription();
};
