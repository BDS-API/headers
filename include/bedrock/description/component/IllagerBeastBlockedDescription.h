#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class IllagerBeastBlockedDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~IllagerBeastBlockedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IllagerBeastBlockedDescription();
};
