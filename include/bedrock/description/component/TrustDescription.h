#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class TrustDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    ~TrustDescription();
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    TrustDescription();
};
