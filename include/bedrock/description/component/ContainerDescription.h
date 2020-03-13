#pragma once

#include "ComponentDescription.h"


class ContainerDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK20ContainerDescription11getJsonNameEv
    ~ContainerDescription(); // _ZN20ContainerDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN20ContainerDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK20ContainerDescription13serializeDataERN4Json5ValueE
    ContainerDescription(); // _ZN20ContainerDescriptionC2Ev
};
