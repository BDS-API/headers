#pragma once

class TripodCameraDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~TripodCameraDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void TripodCameraDescription(void);
};
