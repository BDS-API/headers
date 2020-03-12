#pragma once

#include "ComponentDescription.h"


class RideableDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    ~RideableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    void parseSeatDescription(Json::Value &);
    RideableDescription();
};
