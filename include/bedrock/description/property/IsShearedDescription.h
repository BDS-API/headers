#pragma once

#include "PropertyDescription.h"


class IsShearedDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK20IsShearedDescription11getJsonNameEv
    virtual ~IsShearedDescription(); // _ZN20IsShearedDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN20IsShearedDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK20IsShearedDescription13serializeDataERN4Json5ValueE
    IsShearedDescription(); // _ZN20IsShearedDescriptionC2Ev
};
