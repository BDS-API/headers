#pragma once

#include "MoveControlDescription.h"


class MoveControlSwayDescription : public MoveControlDescription {

public:
    virtual void getJsonName()const; // _ZNK26MoveControlSwayDescription11getJsonNameEv
    virtual ~MoveControlSwayDescription(); // _ZN26MoveControlSwayDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN26MoveControlSwayDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK26MoveControlSwayDescription13serializeDataERN4Json5ValueE
    MoveControlSwayDescription(); // _ZN26MoveControlSwayDescriptionC2Ev
};
