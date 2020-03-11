#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class SoundVolumeDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~SoundVolumeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    SoundVolumeDescription();
};
