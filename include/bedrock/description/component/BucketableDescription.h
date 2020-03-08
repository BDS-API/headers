#pragma once

#include "../../../json/Value"


class BucketableDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual BucketableDescription::~BucketableDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    BucketableDescription(void);
};
