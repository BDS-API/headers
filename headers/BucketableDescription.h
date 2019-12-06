#pragma once

class BucketableDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~BucketableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void BucketableDescription(void);
};
