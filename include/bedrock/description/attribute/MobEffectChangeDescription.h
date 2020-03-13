#pragma once

#include "AttributeDescription.h"


class MobEffectChangeDescription : AttributeDescription {

public:
    virtual void getJsonName()const; // _ZNK26MobEffectChangeDescription11getJsonNameEv
    ~MobEffectChangeDescription(); // _ZN26MobEffectChangeDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN26MobEffectChangeDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK26MobEffectChangeDescription13serializeDataERN4Json5ValueE
    MobEffectChangeDescription(); // _ZN26MobEffectChangeDescriptionC2Ev
};
