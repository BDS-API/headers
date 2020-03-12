#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class ManagedWanderingTraderDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    ~ManagedWanderingTraderDescription();
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    ManagedWanderingTraderDescription();
};
