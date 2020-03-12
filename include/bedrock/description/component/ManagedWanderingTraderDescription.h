#pragma once

#include "ComponentDescription.h"


class ManagedWanderingTraderDescription : ComponentDescription {

public:
    ~ManagedWanderingTraderDescription();
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    ManagedWanderingTraderDescription();
};
