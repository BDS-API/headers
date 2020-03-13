#pragma once

#include "DefintionDescription.h"


class RuntimeIdentifierDescription : DefintionDescription {

public:
    ~RuntimeIdentifierDescription(); // _ZN28RuntimeIdentifierDescriptionD2Ev
    virtual void getJsonName()const; // _ZNK28RuntimeIdentifierDescription11getJsonNameEv
    RuntimeIdentifierDescription(); // _ZN28RuntimeIdentifierDescriptionC2Ev
    RuntimeIdentifierDescription(RuntimeIdentifierDescription &&); // _ZN28RuntimeIdentifierDescriptionC2EOS_
    void parse(Json::Value &); // _ZN28RuntimeIdentifierDescription5parseERN4Json5ValueE
};
