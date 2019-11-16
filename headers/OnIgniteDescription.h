#pragma once

class OnIgniteDescription : TriggerDescription {

    virtual void getJsonName(void)const;
    virtual void ~OnIgniteDescription();
    virtual void ~OnIgniteDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
