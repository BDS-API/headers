#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class RideableDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    ~RideableDescription();
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    RideableDescription();
    void parseSeatDescription(Json::Value &);
};
