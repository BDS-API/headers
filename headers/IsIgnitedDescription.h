#pragma once

class IsIgnitedDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~IsIgnitedDescription();
    virtual ~IsIgnitedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
