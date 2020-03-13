#pragma once

#include "ComponentDescription.h"


class CommandBlockDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK23CommandBlockDescription11getJsonNameEv
    ~CommandBlockDescription(); // _ZN23CommandBlockDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN23CommandBlockDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK23CommandBlockDescription13serializeDataERN4Json5ValueE
    CommandBlockDescription(); // _ZN23CommandBlockDescriptionC2Ev
};
