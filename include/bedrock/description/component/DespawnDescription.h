#pragma once

#include "ComponentDescription.h"


class DespawnDescription : public ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK18DespawnDescription11getJsonNameEv
    virtual ~DespawnDescription(); // _ZN18DespawnDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN18DespawnDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK18DespawnDescription13serializeDataERN4Json5ValueE
    DespawnDescription(); // _ZN18DespawnDescriptionC2Ev
};
