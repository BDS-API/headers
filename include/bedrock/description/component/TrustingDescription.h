#pragma once

#include "../../../json/Value"


class TrustingDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual TrustingDescription::~TrustingDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TrustingDescription(void);
};
