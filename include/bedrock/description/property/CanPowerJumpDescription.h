#pragma once

#include "PropertyDescription.h"


class CanPowerJumpDescription : PropertyDescription {

public:
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    ~CanPowerJumpDescription();
    CanPowerJumpDescription();
};
