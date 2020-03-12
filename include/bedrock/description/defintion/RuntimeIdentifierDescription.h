#pragma once

#include "DefintionDescription.h"


class RuntimeIdentifierDescription : DefintionDescription {

public:
    virtual void getJsonName()const;
    ~RuntimeIdentifierDescription();
    RuntimeIdentifierDescription();
    void parse(Json::Value &);
    RuntimeIdentifierDescription(RuntimeIdentifierDescription &&);
};
