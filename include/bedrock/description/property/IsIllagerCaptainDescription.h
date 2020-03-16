#pragma once

#include "PropertyDescription.h"


class IsIllagerCaptainDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK27IsIllagerCaptainDescription11getJsonNameEv
    virtual ~IsIllagerCaptainDescription(); // _ZN27IsIllagerCaptainDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN27IsIllagerCaptainDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK27IsIllagerCaptainDescription13serializeDataERN4Json5ValueE
    IsIllagerCaptainDescription(); // _ZN27IsIllagerCaptainDescriptionC2Ev
};
