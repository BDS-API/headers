#pragma once

#include "ComponentDescription.h"


class TripodCameraDescription : ComponentDescription {

public:
    ~TripodCameraDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    TripodCameraDescription();
};
