#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class TrustingDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    ~TrustingDescription();
    virtual void serializeData(Json::Value &)const;
    TrustingDescription();
};
