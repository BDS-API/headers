#pragma once

#include "../../../json/Value"


class FireImmuneDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual FireImmuneDescription::~FireImmuneDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    FireImmuneDescription(void);
};
