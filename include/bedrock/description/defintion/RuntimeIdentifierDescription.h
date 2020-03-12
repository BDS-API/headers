#pragma once

#include "DefintionDescription.h"
#include "../../../json/Value.h"


class RuntimeIdentifierDescription : DefintionDescription {

public:
    ~RuntimeIdentifierDescription();
    virtual void getJsonName()const;
    void parse(Json::Value &);
    RuntimeIdentifierDescription(RuntimeIdentifierDescription &&);
    RuntimeIdentifierDescription();
};
