#pragma once

#include "PropertyDescription.h"


class AmbientSoundIntervalDescription : PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK31AmbientSoundIntervalDescription11getJsonNameEv
    ~AmbientSoundIntervalDescription(); // _ZN31AmbientSoundIntervalDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN31AmbientSoundIntervalDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK31AmbientSoundIntervalDescription13serializeDataERN4Json5ValueE
    AmbientSoundIntervalDescription(); // _ZN31AmbientSoundIntervalDescriptionC2Ev
};
