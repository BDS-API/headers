#pragma once

class IdentifierDescription : DefintionDescription {

public:
    virtual ~IdentifierDescription();
    virtual void getJsonName(void)const;

    void IdentifierDescription(std::string const&);
    void IdentifierDescription(char const*);
    void IdentifierDescription(IdentifierDescription&&);
};
