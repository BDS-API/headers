#pragma once

class FlyingSpeedDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~FlyingSpeedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void FlyingSpeedDescription(void);
};
