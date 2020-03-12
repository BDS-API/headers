#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class AmbientSoundIntervalDescription : PropertyDescription {

public:
    ~AmbientSoundIntervalDescription();
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    AmbientSoundIntervalDescription();
};
