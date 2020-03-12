#pragma once

#include "PropertyDescription.h"


class AmbientSoundIntervalDescription : PropertyDescription {

public:
    virtual void deserializeData(Json::Value &);
    ~AmbientSoundIntervalDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    AmbientSoundIntervalDescription();
};
