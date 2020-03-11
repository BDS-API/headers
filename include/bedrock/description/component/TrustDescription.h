#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class TrustDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~TrustDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TrustDescription();
};
