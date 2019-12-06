#pragma once

class IdentifierDescription : DefintionDescription {

public:
    virtual ~IdentifierDescription();
    virtual void getJsonName(void)const;

    void IdentifierDescription(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void IdentifierDescription(char const*);
    void IdentifierDescription(IdentifierDescription&&);
};
