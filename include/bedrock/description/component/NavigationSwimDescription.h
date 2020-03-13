#pragma once

#include "NavigationDescription.h"


class NavigationSwimDescription : NavigationDescription {

public:
    virtual void getJsonName()const; // _ZNK25NavigationSwimDescription11getJsonNameEv
    ~NavigationSwimDescription(); // _ZN25NavigationSwimDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN25NavigationSwimDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK25NavigationSwimDescription13serializeDataERN4Json5ValueE
    NavigationSwimDescription(); // _ZN25NavigationSwimDescriptionC2Ev
};
