#pragma once

#include "../../../json/Value"


class TrustDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual TrustDescription::~TrustDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TrustDescription(void);
};
