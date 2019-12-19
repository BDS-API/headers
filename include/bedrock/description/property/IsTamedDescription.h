#pragma once

class IsTamedDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual IsTamedDescription::~IsTamedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsTamedDescription(void);
};
