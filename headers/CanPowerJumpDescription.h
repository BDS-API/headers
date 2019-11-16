#pragma once

class CanPowerJumpDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~CanPowerJumpDescription();
    virtual ~CanPowerJumpDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
