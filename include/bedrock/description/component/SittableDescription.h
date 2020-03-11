#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class SittableDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~SittableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    SittableDescription();
};
