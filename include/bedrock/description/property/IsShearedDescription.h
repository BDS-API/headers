#pragma once

class IsShearedDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual IsShearedDescription::~IsShearedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsShearedDescription(void);
};