#pragma once

class IsChargedDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~IsChargedDescription();
    virtual void ~IsChargedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
