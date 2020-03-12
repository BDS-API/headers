#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class WalkAnimationSpeedDescription : PropertyDescription {

public:
    ~WalkAnimationSpeedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    WalkAnimationSpeedDescription();
};
