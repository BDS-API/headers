#pragma once

#include "PropertyDescription.h"


class SoundVolumeDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    ~SoundVolumeDescription();
    virtual void serializeData(Json::Value &)const;
    SoundVolumeDescription();
};
