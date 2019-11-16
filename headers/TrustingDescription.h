#pragma once

class TrustingDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~TrustingDescription();
    virtual ~TrustingDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
