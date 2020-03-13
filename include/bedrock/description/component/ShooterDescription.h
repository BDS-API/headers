#pragma once

#include "ComponentDescription.h"


class ShooterDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK18ShooterDescription11getJsonNameEv
    ~ShooterDescription(); // _ZN18ShooterDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN18ShooterDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK18ShooterDescription13serializeDataERN4Json5ValueE
    ShooterDescription(); // _ZN18ShooterDescriptionC2Ev
};
