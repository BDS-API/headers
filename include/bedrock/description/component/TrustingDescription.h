#pragma once

class TrustingDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual TrustingDescription::~TrustingDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TrustingDescription(void);
};
