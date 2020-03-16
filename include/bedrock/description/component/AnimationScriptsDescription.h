#pragma once

#include "ComponentDescription.h"


class AnimationScriptsDescription : public ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK27AnimationScriptsDescription11getJsonNameEv
    virtual ~AnimationScriptsDescription(); // _ZN27AnimationScriptsDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN27AnimationScriptsDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK27AnimationScriptsDescription13serializeDataERN4Json5ValueE
    AnimationScriptsDescription(); // _ZN27AnimationScriptsDescriptionC2Ev
    AnimationScriptsDescription(AnimationScriptsDescription &&); // _ZN27AnimationScriptsDescriptionC2EOS_
};
