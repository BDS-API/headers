#pragma once

class FlyingSpeedDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual FlyingSpeedDescription::~FlyingSpeedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    FlyingSpeedDescription(void);
};
