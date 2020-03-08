#pragma once

#include "../../../json/Value"


class CanPowerJumpDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual CanPowerJumpDescription::~CanPowerJumpDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    CanPowerJumpDescription(void);
};
