#pragma once

#include "../../../json/Value"


class CanFlyDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual CanFlyDescription::~CanFlyDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    CanFlyDescription(void);
};
