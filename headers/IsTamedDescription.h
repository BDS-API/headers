#pragma once

class IsTamedDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~IsTamedDescription();
    virtual void ~IsTamedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
