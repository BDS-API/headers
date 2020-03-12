#pragma once

#include "ComponentDescription.h"


class WaterMovementDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    ~WaterMovementDescription();
    virtual void deserializeData(Json::Value &);
    WaterMovementDescription();
};
