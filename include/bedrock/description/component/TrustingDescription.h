#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class TrustingDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~TrustingDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TrustingDescription();
};
