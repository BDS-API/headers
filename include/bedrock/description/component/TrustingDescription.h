#pragma once

#include "ComponentDescription.h"


class TrustingDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    ~TrustingDescription();
    virtual void serializeData(Json::Value &)const;
    TrustingDescription();
};
