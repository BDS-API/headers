#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class CanPowerJumpDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~CanPowerJumpDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    CanPowerJumpDescription();
};
