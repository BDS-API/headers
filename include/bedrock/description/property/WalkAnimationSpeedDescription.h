#pragma once

#include "../../../json/Value"


class WalkAnimationSpeedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual WalkAnimationSpeedDescription::~WalkAnimationSpeedDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    WalkAnimationSpeedDescription(void);
};
