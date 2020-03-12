#pragma once

#include "ComponentDescription.h"


class DanceDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    ~DanceDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
};
