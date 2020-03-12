#pragma once

#include "PropertyDescription.h"


class DefaultLookAngleDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    ~DefaultLookAngleDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    DefaultLookAngleDescription();
};
