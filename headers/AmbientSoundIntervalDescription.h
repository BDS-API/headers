#pragma once

class AmbientSoundIntervalDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~AmbientSoundIntervalDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void AmbientSoundIntervalDescription(void);
};
