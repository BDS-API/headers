#pragma once

class IsIgnitedDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~IsIgnitedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void IsIgnitedDescription(void);
};
