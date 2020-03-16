#pragma once

#include "ComponentDescription.h"


class TrustDescription : public ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK16TrustDescription11getJsonNameEv
    virtual ~TrustDescription(); // _ZN16TrustDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN16TrustDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK16TrustDescription13serializeDataERN4Json5ValueE
    TrustDescription(); // _ZN16TrustDescriptionC2Ev
};
