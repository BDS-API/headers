#pragma once

class OnIgniteDescription : TriggerDescription {

    virtual void getJsonName(void)const;
    virtual ~OnIgniteDescription();
    virtual ~OnIgniteDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
