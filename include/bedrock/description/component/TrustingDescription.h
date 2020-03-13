#pragma once

#include "ComponentDescription.h"


class TrustingDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK19TrustingDescription11getJsonNameEv
    ~TrustingDescription(); // _ZN19TrustingDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN19TrustingDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK19TrustingDescription13serializeDataERN4Json5ValueE
    TrustingDescription(); // _ZN19TrustingDescriptionC2Ev
};
