#pragma once

#include "../../../json/Value"


class ManagedWanderingTraderDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ManagedWanderingTraderDescription::~ManagedWanderingTraderDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    ManagedWanderingTraderDescription(void);
};
