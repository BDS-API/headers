#pragma once

class TripodCameraDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~TripodCameraDescription();
    virtual ~TripodCameraDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
