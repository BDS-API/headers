#pragma once

#include "PropertyDescription.h"


class SoundVolumeDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK22SoundVolumeDescription11getJsonNameEv
    virtual ~SoundVolumeDescription(); // _ZN22SoundVolumeDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN22SoundVolumeDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK22SoundVolumeDescription13serializeDataERN4Json5ValueE
    SoundVolumeDescription(); // _ZN22SoundVolumeDescriptionC2Ev
};
