#pragma once

#include "ComponentDescription.h"


class RaidTriggerDescription : public ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK22RaidTriggerDescription11getJsonNameEv
    virtual ~RaidTriggerDescription(); // _ZN22RaidTriggerDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN22RaidTriggerDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK22RaidTriggerDescription13serializeDataERN4Json5ValueE
    RaidTriggerDescription(); // _ZN22RaidTriggerDescriptionC2Ev
};
