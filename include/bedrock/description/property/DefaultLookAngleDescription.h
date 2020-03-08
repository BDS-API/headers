#pragma once

#include "../../../json/Value"


class DefaultLookAngleDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    DefaultLookAngleDescription::~DefaultLookAngleDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    DefaultLookAngleDescription(void);
};
