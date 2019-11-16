#pragma once

class IsShakingDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~IsShakingDescription();
    virtual void ~IsShakingDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
