#pragma once

#include "../../../json/Value"


class AmbientSoundIntervalDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual AmbientSoundIntervalDescription::~AmbientSoundIntervalDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    AmbientSoundIntervalDescription(void);
};
