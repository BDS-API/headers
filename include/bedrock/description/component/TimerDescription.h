#pragma once

#include "ComponentDescription.h"


class TimerDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK16TimerDescription11getJsonNameEv
    ~TimerDescription(); // _ZN16TimerDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN16TimerDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK16TimerDescription13serializeDataERN4Json5ValueE
    TimerDescription(); // _ZN16TimerDescriptionC2Ev
};
