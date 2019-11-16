#pragma once

class CanFlyDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~CanFlyDescription();
    virtual ~CanFlyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
