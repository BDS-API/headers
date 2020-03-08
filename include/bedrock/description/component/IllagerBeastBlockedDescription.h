#pragma once

#include "../../../json/Value"


class IllagerBeastBlockedDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual IllagerBeastBlockedDescription::~IllagerBeastBlockedDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IllagerBeastBlockedDescription(void);
};
