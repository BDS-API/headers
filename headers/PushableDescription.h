#pragma once

class PushableDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~PushableDescription();
    virtual void ~PushableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
