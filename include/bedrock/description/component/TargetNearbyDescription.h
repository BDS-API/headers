#pragma once

#include "../../../json/Value"


class TargetNearbyDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual TargetNearbyDescription::~TargetNearbyDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TargetNearbyDescription(void);
};
