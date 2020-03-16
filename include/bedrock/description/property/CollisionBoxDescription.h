#pragma once

#include "PropertyDescription.h"


class CollisionBoxDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK23CollisionBoxDescription11getJsonNameEv
    virtual ~CollisionBoxDescription(); // _ZN23CollisionBoxDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN23CollisionBoxDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK23CollisionBoxDescription13serializeDataERN4Json5ValueE
    CollisionBoxDescription(); // _ZN23CollisionBoxDescriptionC2Ev
};
