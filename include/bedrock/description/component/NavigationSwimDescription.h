#pragma once

#include "NavigationDescription.h"


class NavigationSwimDescription : public NavigationDescription {

public:
    virtual void getJsonName()const; // _ZNK25NavigationSwimDescription11getJsonNameEv
    virtual ~NavigationSwimDescription(); // _ZN25NavigationSwimDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN25NavigationSwimDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK25NavigationSwimDescription13serializeDataERN4Json5ValueE
    NavigationSwimDescription(); // _ZN25NavigationSwimDescriptionC2Ev
};
