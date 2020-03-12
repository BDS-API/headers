#pragma once

#include "PropertyDescription.h"


class WalkAnimationSpeedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    ~WalkAnimationSpeedDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    WalkAnimationSpeedDescription();
};
