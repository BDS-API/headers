#pragma once

#include "ComponentDescription.h"


class RailActivatorDescription : ComponentDescription {

public:
    ~RailActivatorDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    RailActivatorDescription();
};
