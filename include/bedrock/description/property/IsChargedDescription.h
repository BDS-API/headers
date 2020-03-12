#pragma once

#include "PropertyDescription.h"


class IsChargedDescription : PropertyDescription {

public:
    ~IsChargedDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    IsChargedDescription();
};
