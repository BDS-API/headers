#pragma once

#include "../../../json/Value"


class TargetNearbyDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    TargetNearbyDescription::~TargetNearbyDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TargetNearbyDescription(void);
};
