#pragma once

#include "DefintionDescription.h"
#include <string>


class IdentifierDescription : DefintionDescription {

public:
    virtual void getJsonName()const;
    ~IdentifierDescription();
    IdentifierDescription(char const*);
    IdentifierDescription(std::string const&);
    IdentifierDescription(IdentifierDescription &&);
};
