#pragma once

#include "ComponentDescription.h"


class BucketableDescription : ComponentDescription {

public:
    ~BucketableDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    BucketableDescription();
};
