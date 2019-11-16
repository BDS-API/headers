#pragma once

class SoundVolumeDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~SoundVolumeDescription();
    virtual void ~SoundVolumeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
