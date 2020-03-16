#pragma once

#include "ComponentDescription.h"


class TeleportDescription : public ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK19TeleportDescription11getJsonNameEv
    virtual ~TeleportDescription(); // _ZN19TeleportDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN19TeleportDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK19TeleportDescription13serializeDataERN4Json5ValueE
    TeleportDescription(); // _ZN19TeleportDescriptionC2Ev
};
