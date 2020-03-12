#pragma once

#include <string>
#include "DefintionDescription.h"


class IdentifierDescription : DefintionDescription {

public:
    virtual void getJsonName()const;
    ~IdentifierDescription();
    IdentifierDescription(IdentifierDescription &&);
    IdentifierDescription(std::string const&);
    IdentifierDescription(char const*);
};
