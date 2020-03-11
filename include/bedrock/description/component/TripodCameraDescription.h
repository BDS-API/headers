#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class TripodCameraDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~TripodCameraDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TripodCameraDescription();
};
