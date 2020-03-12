#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class BucketableDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    ~BucketableDescription();
    virtual void serializeData(Json::Value &)const;
    BucketableDescription();
};
