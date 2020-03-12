#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class IsTamedDescription : PropertyDescription {

public:
    virtual void deserializeData(Json::Value &);
    ~IsTamedDescription();
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    IsTamedDescription();
};
