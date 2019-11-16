#pragma once

class AmbientSoundIntervalDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~AmbientSoundIntervalDescription();
    virtual ~AmbientSoundIntervalDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
