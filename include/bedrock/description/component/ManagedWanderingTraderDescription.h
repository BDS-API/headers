#pragma once

#include "ComponentDescription.h"


class ManagedWanderingTraderDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK33ManagedWanderingTraderDescription11getJsonNameEv
    ~ManagedWanderingTraderDescription(); // _ZN33ManagedWanderingTraderDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN33ManagedWanderingTraderDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK33ManagedWanderingTraderDescription13serializeDataERN4Json5ValueE
    ManagedWanderingTraderDescription(); // _ZN33ManagedWanderingTraderDescriptionC2Ev
};
