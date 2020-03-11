#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class ManagedWanderingTraderDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~ManagedWanderingTraderDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    ManagedWanderingTraderDescription();
};
