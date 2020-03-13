#pragma once

#include "ComponentDescription.h"


class IllagerBeastBlockedDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK30IllagerBeastBlockedDescription11getJsonNameEv
    ~IllagerBeastBlockedDescription(); // _ZN30IllagerBeastBlockedDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN30IllagerBeastBlockedDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK30IllagerBeastBlockedDescription13serializeDataERN4Json5ValueE
    IllagerBeastBlockedDescription(); // _ZN30IllagerBeastBlockedDescriptionC2Ev
};
