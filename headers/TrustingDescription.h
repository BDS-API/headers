#pragma once

class TrustingDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~TrustingDescription();
    virtual void ~TrustingDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
