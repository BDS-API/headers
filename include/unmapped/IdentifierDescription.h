#pragma once

class IdentifierDescription : DefintionDescription {

public:
    virtual IdentifierDescription::~IdentifierDescription();
    virtual void getJsonName(void)const;

    IdentifierDescription(std::string const&);
    IdentifierDescription(char const*);
    IdentifierDescription(IdentifierDescription&&);
};
