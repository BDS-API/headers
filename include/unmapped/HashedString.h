#pragma once

#include <string>


class HashedString {

public:
    static long defaultErrorValue;

    HashedString(char const*);
    HashedString(unsigned long, std::string);
    HashedString(HashedString const&);
    void operator!=(HashedString const&)const;
    void empty()const;
    bool isEmpty()const;
    HashedString(std::string const&);
    void operator==(HashedString const&)const;
    void clear();
    HashedString(unsigned long, char const*);
//  HashedString(decltype(nullptr); //TODO: incomplete function definition
    void c_str()const;
    HashedString();
    HashedString(HashedString &&);
    void computeHash(char const*);
    void computeHash(std::string const&);
    void operator<(HashedString const&)const;
    std::string getString()const;
    void getHash()const;
    ~HashedString();
    void getEmptyString();
};
