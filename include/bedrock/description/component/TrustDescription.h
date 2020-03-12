#pragma once

#include "ComponentDescription.h"


class TrustDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    ~TrustDescription();
    virtual void serializeData(Json::Value &)const;
    TrustDescription();
};
