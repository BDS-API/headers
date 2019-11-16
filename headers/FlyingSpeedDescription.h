#pragma once

class FlyingSpeedDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~FlyingSpeedDescription();
    virtual void ~FlyingSpeedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
