#pragma once

#include "ComponentDescription.h"


class TargetNearbyDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    ~TargetNearbyDescription();
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    TargetNearbyDescription();
};
