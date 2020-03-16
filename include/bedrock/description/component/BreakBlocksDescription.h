#pragma once

#include "ComponentDescription.h"


class BreakBlocksDescription : public ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK22BreakBlocksDescription11getJsonNameEv
    virtual ~BreakBlocksDescription(); // _ZN22BreakBlocksDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN22BreakBlocksDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK22BreakBlocksDescription13serializeDataERN4Json5ValueE
    BreakBlocksDescription(); // _ZN22BreakBlocksDescriptionC2Ev
};
