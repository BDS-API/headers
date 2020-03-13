#pragma once

#include "ComponentDescription.h"


class AnimationsDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK21AnimationsDescription11getJsonNameEv
    ~AnimationsDescription(); // _ZN21AnimationsDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN21AnimationsDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK21AnimationsDescription13serializeDataERN4Json5ValueE
    AnimationsDescription(); // _ZN21AnimationsDescriptionC2Ev
    AnimationsDescription(AnimationsDescription &&); // _ZN21AnimationsDescriptionC2EOS_
};
