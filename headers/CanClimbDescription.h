#pragma once

class CanClimbDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~CanClimbDescription();
    virtual void ~CanClimbDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
