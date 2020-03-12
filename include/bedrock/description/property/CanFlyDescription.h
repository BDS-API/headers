#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class CanFlyDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    ~CanFlyDescription();
    virtual void deserializeData(Json::Value &);
    CanFlyDescription();
};
