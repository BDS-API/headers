#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class FlyingSpeedDescription : PropertyDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    ~FlyingSpeedDescription();
    virtual void serializeData(Json::Value &)const;
    FlyingSpeedDescription();
};
