#pragma once

class TargetNearbyDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~TargetNearbyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void TargetNearbyDescription(void);
};
