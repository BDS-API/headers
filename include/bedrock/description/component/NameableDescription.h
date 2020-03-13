#pragma once

#include "ComponentDescription.h"


class NameableDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK19NameableDescription11getJsonNameEv
    ~NameableDescription(); // _ZN19NameableDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN19NameableDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK19NameableDescription13serializeDataERN4Json5ValueE
    NameableDescription(); // _ZN19NameableDescriptionC2Ev
    void parseNameActions(Json::Value &); // _ZN19NameableDescription16parseNameActionsERN4Json5ValueE
};
