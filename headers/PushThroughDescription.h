#pragma once

class PushThroughDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~PushThroughDescription();
    virtual void ~PushThroughDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
