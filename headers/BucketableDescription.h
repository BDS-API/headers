#pragma once

class BucketableDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~BucketableDescription();
    virtual ~BucketableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
