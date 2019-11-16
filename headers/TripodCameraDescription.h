#pragma once

class TripodCameraDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void TripodCameraDescription::~TripodCameraDescription();
    virtual void TripodCameraDescription::~TripodCameraDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
