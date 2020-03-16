#pragma once

#include "DefintionDescription.h"


class IsSummonableDescription : public DefintionDescription {

public:
    virtual ~IsSummonableDescription(); // _ZN23IsSummonableDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void getJsonName()const; // _ZNK23IsSummonableDescription11getJsonNameEv
    IsSummonableDescription(); // _ZN23IsSummonableDescriptionC2Ev
    IsSummonableDescription(IsSummonableDescription &&); // _ZN23IsSummonableDescriptionC2EOS_
    void parse(Json::Value &); // _ZN23IsSummonableDescription5parseERN4Json5ValueE
};
