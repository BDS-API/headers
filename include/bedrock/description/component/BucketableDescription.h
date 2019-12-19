#pragma once

class BucketableDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual BucketableDescription::~BucketableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    BucketableDescription(void);
};
