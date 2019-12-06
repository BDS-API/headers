#pragma once

class TrustingDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~TrustingDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void TrustingDescription(void);
};
