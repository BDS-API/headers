#pragma once

class IsShakingDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~IsShakingDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void IsShakingDescription(void);
};
