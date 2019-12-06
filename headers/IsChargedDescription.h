#pragma once

class IsChargedDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~IsChargedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void IsChargedDescription(void);
};
