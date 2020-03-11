#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class RideableDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~RideableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    RideableDescription();
    void parseSeatDescription(Json::Value &);
};
