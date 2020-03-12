#pragma once

#include "ComponentDescription.h"


class SittableDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    ~SittableDescription();
    SittableDescription();
};
