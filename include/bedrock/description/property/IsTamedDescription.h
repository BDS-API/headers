#pragma once

#include "PropertyDescription.h"


class IsTamedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    ~IsTamedDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    IsTamedDescription();
};
