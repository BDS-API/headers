#pragma once

#include "PropertyDescription.h"


class FloatsInLiquidDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK25FloatsInLiquidDescription11getJsonNameEv
    virtual ~FloatsInLiquidDescription(); // _ZN25FloatsInLiquidDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN25FloatsInLiquidDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK25FloatsInLiquidDescription13serializeDataERN4Json5ValueE
    FloatsInLiquidDescription(); // _ZN25FloatsInLiquidDescriptionC2Ev
};
