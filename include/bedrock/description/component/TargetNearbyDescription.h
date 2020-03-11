#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class TargetNearbyDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~TargetNearbyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TargetNearbyDescription();
};
