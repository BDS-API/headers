#pragma once

#include "PropertyDescription.h"


class CanPowerJumpDescription : PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK23CanPowerJumpDescription11getJsonNameEv
    ~CanPowerJumpDescription(); // _ZN23CanPowerJumpDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN23CanPowerJumpDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK23CanPowerJumpDescription13serializeDataERN4Json5ValueE
    CanPowerJumpDescription(); // _ZN23CanPowerJumpDescriptionC2Ev
};
