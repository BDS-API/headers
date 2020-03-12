#pragma once

#include "ComponentDescription.h"


class TrailDescription : ComponentDescription {

public:
    ~TrailDescription();
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    TrailDescription();
};
