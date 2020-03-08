#pragma once

#include "../../../json/Value"


class WaterMovementDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    WaterMovementDescription::~WaterMovementDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    WaterMovementDescription(void);
};
