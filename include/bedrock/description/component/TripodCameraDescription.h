#pragma once

#include "../../../json/Value"


class TripodCameraDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual TripodCameraDescription::~TripodCameraDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TripodCameraDescription(void);
};
