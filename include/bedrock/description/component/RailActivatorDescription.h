#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class RailActivatorDescription : ComponentDescription {

public:
    ~RailActivatorDescription();
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    RailActivatorDescription();
};
