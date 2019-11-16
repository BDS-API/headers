#pragma once

class TargetNearbyDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~TargetNearbyDescription();
    virtual ~TargetNearbyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
