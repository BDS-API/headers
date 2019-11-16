#pragma once

class CanPowerJumpDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~CanPowerJumpDescription();
    virtual void ~CanPowerJumpDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
