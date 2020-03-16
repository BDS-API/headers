#pragma once

#include "ComponentDescription.h"


class EconomyTradeableDescription : public ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK27EconomyTradeableDescription11getJsonNameEv
    virtual ~EconomyTradeableDescription(); // _ZN27EconomyTradeableDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN27EconomyTradeableDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK27EconomyTradeableDescription13serializeDataERN4Json5ValueE
    EconomyTradeableDescription(); // _ZN27EconomyTradeableDescriptionC2Ev
};
