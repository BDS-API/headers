#pragma once

class TrustDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~TrustDescription();
    virtual ~TrustDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
