#pragma once

#include "ComponentDescription.h"


class NpcDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK14NpcDescription11getJsonNameEv
    ~NpcDescription(); // _ZN14NpcDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN14NpcDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK14NpcDescription13serializeDataERN4Json5ValueE
    NpcDescription(); // _ZN14NpcDescriptionC2Ev
};
