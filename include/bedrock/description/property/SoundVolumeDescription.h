#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class SoundVolumeDescription : PropertyDescription {

public:
    ~SoundVolumeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    SoundVolumeDescription();
};
