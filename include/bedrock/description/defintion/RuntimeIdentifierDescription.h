#pragma once

#include "./DefintionDescription.h"
#include "./RuntimeIdentifierDescription.h"
#include "../../../json/Value.h"


class RuntimeIdentifierDescription : DefintionDescription {

public:
    virtual ~RuntimeIdentifierDescription();
    virtual void getJsonName()const;

    RuntimeIdentifierDescription();
    RuntimeIdentifierDescription(RuntimeIdentifierDescription &&);
    void parse(Json::Value &);
};
