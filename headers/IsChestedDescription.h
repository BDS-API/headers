#pragma once

class IsChestedDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~IsChestedDescription();
    virtual void ~IsChestedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
