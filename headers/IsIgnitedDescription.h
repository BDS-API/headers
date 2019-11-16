#pragma once

class IsIgnitedDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~IsIgnitedDescription();
    virtual void ~IsIgnitedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
