#pragma once

#include "DefintionDescription.h"


class RuntimeIdentifierDescription : public DefintionDescription {

public:
    virtual ~RuntimeIdentifierDescription(); // _ZN28RuntimeIdentifierDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void getJsonName()const; // _ZNK28RuntimeIdentifierDescription11getJsonNameEv
    RuntimeIdentifierDescription(); // _ZN28RuntimeIdentifierDescriptionC2Ev
    RuntimeIdentifierDescription(RuntimeIdentifierDescription &&); // _ZN28RuntimeIdentifierDescriptionC2EOS_
    void parse(Json::Value &); // _ZN28RuntimeIdentifierDescription5parseERN4Json5ValueE
};
