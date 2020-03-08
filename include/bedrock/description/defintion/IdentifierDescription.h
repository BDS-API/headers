#pragma once



class IdentifierDescription : DefintionDescription {

public:
    IdentifierDescription::~IdentifierDescription()
    virtual void getJsonName()const;

    IdentifierDescription(std::string const&);
    IdentifierDescription(char const*);
    IdentifierDescription(IdentifierDescription&&);
};
