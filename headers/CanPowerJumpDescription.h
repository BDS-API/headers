#pragma once

class CanPowerJumpDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~CanPowerJumpDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void CanPowerJumpDescription(void);
};
