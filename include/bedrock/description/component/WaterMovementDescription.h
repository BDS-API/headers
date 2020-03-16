#pragma once

#include "ComponentDescription.h"


class WaterMovementDescription : public ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK24WaterMovementDescription11getJsonNameEv
    virtual ~WaterMovementDescription(); // _ZN24WaterMovementDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN24WaterMovementDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK24WaterMovementDescription13serializeDataERN4Json5ValueE
    WaterMovementDescription(); // _ZN24WaterMovementDescriptionC2Ev
};
