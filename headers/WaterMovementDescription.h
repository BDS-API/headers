#pragma once

class WaterMovementDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void WaterMovementDescription::~WaterMovementDescription();
    virtual void WaterMovementDescription::~WaterMovementDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
