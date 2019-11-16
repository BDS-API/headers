#pragma once

class TripodCameraDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~TripodCameraDescription();
    virtual void ~TripodCameraDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
