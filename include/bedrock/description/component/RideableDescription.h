#pragma once

#include "ComponentDescription.h"


class RideableDescription : public ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK19RideableDescription11getJsonNameEv
    virtual ~RideableDescription(); // _ZN19RideableDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN19RideableDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK19RideableDescription13serializeDataERN4Json5ValueE
    RideableDescription(); // _ZN19RideableDescriptionC2Ev
    void parseSeatDescription(Json::Value &); // _ZN19RideableDescription20parseSeatDescriptionERN4Json5ValueE
};
