#pragma once

#include "../../../json/Value"


class FlyingSpeedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    FlyingSpeedDescription::~FlyingSpeedDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    FlyingSpeedDescription(void);
};
