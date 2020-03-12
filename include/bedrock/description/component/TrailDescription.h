#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class TrailDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    ~TrailDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    TrailDescription();
};
