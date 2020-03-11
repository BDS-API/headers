#pragma once

#include "./DefintionDescription.h"
#include "./IdentifierDescription.h"
#include <string>


class IdentifierDescription : DefintionDescription {

public:
    virtual ~IdentifierDescription();
    virtual void getJsonName()const;

    IdentifierDescription(std::string const&);
    IdentifierDescription(char const*);
    IdentifierDescription(IdentifierDescription &&);
};
