#pragma once

class TargetNearbyDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual TargetNearbyDescription::~TargetNearbyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TargetNearbyDescription(void);
};
