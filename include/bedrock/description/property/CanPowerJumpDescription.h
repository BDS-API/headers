#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class CanPowerJumpDescription : PropertyDescription {

public:
    ~CanPowerJumpDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    CanPowerJumpDescription();
};
