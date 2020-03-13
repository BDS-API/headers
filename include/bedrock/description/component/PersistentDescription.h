#pragma once

#include "ComponentDescription.h"


class PersistentDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK21PersistentDescription11getJsonNameEv
    ~PersistentDescription(); // _ZN21PersistentDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN21PersistentDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK21PersistentDescription13serializeDataERN4Json5ValueE
    PersistentDescription(); // _ZN21PersistentDescriptionC2Ev
};
