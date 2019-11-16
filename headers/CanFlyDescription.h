#pragma once

class CanFlyDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~CanFlyDescription();
    virtual void ~CanFlyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
