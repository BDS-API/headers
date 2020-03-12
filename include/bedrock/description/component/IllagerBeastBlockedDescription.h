#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class IllagerBeastBlockedDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    ~IllagerBeastBlockedDescription();
    IllagerBeastBlockedDescription();
};
