#pragma once

#include "ComponentDescription.h"


class TradeResupplyDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK24TradeResupplyDescription11getJsonNameEv
    ~TradeResupplyDescription(); // _ZN24TradeResupplyDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN24TradeResupplyDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK24TradeResupplyDescription13serializeDataERN4Json5ValueE
    TradeResupplyDescription(); // _ZN24TradeResupplyDescriptionC2Ev
};
