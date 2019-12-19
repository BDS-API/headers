#pragma once

class TrustDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual TrustDescription::~TrustDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TrustDescription(void);
};
