#pragma once

#include "PropertyDescription.h"


class FlyingSpeedDescription : PropertyDescription {

public:
    ~FlyingSpeedDescription();
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    FlyingSpeedDescription();
};
