#pragma once

#include "PropertyDescription.h"


class FireImmuneDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK21FireImmuneDescription11getJsonNameEv
    virtual ~FireImmuneDescription(); // _ZN21FireImmuneDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN21FireImmuneDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK21FireImmuneDescription13serializeDataERN4Json5ValueE
    FireImmuneDescription(); // _ZN21FireImmuneDescriptionC2Ev
};
