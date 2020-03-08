#pragma once

#include "../../../json/Value"


class IsTamedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual IsTamedDescription::~IsTamedDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsTamedDescription(void);
};
