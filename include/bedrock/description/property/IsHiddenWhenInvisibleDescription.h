#pragma once

#include "PropertyDescription.h"


class IsHiddenWhenInvisibleDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK32IsHiddenWhenInvisibleDescription11getJsonNameEv
    virtual ~IsHiddenWhenInvisibleDescription(); // _ZN32IsHiddenWhenInvisibleDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN32IsHiddenWhenInvisibleDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK32IsHiddenWhenInvisibleDescription13serializeDataERN4Json5ValueE
    IsHiddenWhenInvisibleDescription(); // _ZN32IsHiddenWhenInvisibleDescriptionC2Ev
};
