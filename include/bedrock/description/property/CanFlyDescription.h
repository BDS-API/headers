#pragma once

#include "PropertyDescription.h"


class CanFlyDescription : PropertyDescription {

public:
    ~CanFlyDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    CanFlyDescription();
};
