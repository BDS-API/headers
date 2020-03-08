#pragma once

#include "../../../json/Value"


class SoundVolumeDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual SoundVolumeDescription::~SoundVolumeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    SoundVolumeDescription(void);
};
