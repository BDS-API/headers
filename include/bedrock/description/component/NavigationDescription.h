#pragma once

#include "ComponentDescription.h"


class NavigationDescription : public ComponentDescription {

public:
    virtual ~NavigationDescription(); // _ZN21NavigationDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN21NavigationDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK21NavigationDescription13serializeDataERN4Json5ValueE
    NavigationDescription(); // _ZN21NavigationDescriptionC2Ev
};
