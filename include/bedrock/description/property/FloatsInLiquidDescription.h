#pragma once

#include "PropertyDescription.h"


class FloatsInLiquidDescription : PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK25FloatsInLiquidDescription11getJsonNameEv
    ~FloatsInLiquidDescription(); // _ZN25FloatsInLiquidDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN25FloatsInLiquidDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK25FloatsInLiquidDescription13serializeDataERN4Json5ValueE
    FloatsInLiquidDescription(); // _ZN25FloatsInLiquidDescriptionC2Ev
};
