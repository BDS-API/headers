#pragma once

#include "ComponentDescription.h"


class EconomyTradeableDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK27EconomyTradeableDescription11getJsonNameEv
    ~EconomyTradeableDescription(); // _ZN27EconomyTradeableDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN27EconomyTradeableDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK27EconomyTradeableDescription13serializeDataERN4Json5ValueE
    EconomyTradeableDescription(); // _ZN27EconomyTradeableDescriptionC2Ev
};
