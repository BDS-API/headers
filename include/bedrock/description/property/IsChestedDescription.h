#pragma once

#include "../../../json/Value"


class IsChestedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual IsChestedDescription::~IsChestedDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsChestedDescription(void);
};
