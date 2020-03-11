#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class AmbientSoundIntervalDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~AmbientSoundIntervalDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    AmbientSoundIntervalDescription();
};
