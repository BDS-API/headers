#pragma once

#include "../../../json/Value"


class CanPowerJumpDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    CanPowerJumpDescription::~CanPowerJumpDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    CanPowerJumpDescription(void);
};
