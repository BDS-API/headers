#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class DefaultLookAngleDescription : PropertyDescription {

public:
    virtual void deserializeData(Json::Value &);
    ~DefaultLookAngleDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    DefaultLookAngleDescription();
};
