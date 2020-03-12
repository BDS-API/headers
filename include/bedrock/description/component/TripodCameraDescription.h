#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class TripodCameraDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    ~TripodCameraDescription();
    virtual void getJsonName()const;
    TripodCameraDescription();
};
