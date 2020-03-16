#pragma once

#include "PropertyDescription.h"


class CanPowerJumpDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK23CanPowerJumpDescription11getJsonNameEv
    virtual ~CanPowerJumpDescription(); // _ZN23CanPowerJumpDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN23CanPowerJumpDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK23CanPowerJumpDescription13serializeDataERN4Json5ValueE
    CanPowerJumpDescription(); // _ZN23CanPowerJumpDescriptionC2Ev
};
