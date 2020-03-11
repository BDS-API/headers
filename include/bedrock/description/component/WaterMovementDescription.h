#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class WaterMovementDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~WaterMovementDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    WaterMovementDescription();
};
