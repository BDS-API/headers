#pragma once

class ManagedWanderingTraderDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~ManagedWanderingTraderDescription();
    virtual ~ManagedWanderingTraderDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
