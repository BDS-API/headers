#pragma once

#include "ComponentDescription.h"


class IllagerBeastBlockedDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    ~IllagerBeastBlockedDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    IllagerBeastBlockedDescription();
};
