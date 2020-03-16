#pragma once

#include "ComponentDescription.h"


class BucketableDescription : public ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK21BucketableDescription11getJsonNameEv
    virtual ~BucketableDescription(); // _ZN21BucketableDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN21BucketableDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK21BucketableDescription13serializeDataERN4Json5ValueE
    BucketableDescription(); // _ZN21BucketableDescriptionC2Ev
};
