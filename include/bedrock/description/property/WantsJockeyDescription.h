#pragma once

#include "PropertyDescription.h"


class WantsJockeyDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK22WantsJockeyDescription11getJsonNameEv
    virtual ~WantsJockeyDescription(); // _ZN22WantsJockeyDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN22WantsJockeyDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK22WantsJockeyDescription13serializeDataERN4Json5ValueE
    WantsJockeyDescription(); // _ZN22WantsJockeyDescriptionC2Ev
};
