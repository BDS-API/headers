#pragma once

#include "DefintionDescription.h"


class IsExperimentalDescription : public DefintionDescription {

public:
    virtual ~IsExperimentalDescription(); // _ZN25IsExperimentalDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void getJsonName()const; // _ZNK25IsExperimentalDescription11getJsonNameEv
    IsExperimentalDescription(); // _ZN25IsExperimentalDescriptionC2Ev
    IsExperimentalDescription(IsExperimentalDescription &&); // _ZN25IsExperimentalDescriptionC2EOS_
    void parse(Json::Value &); // _ZN25IsExperimentalDescription5parseERN4Json5ValueE
};
