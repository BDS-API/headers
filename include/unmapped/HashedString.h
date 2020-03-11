#pragma once

#include "./HashedString.h"
#include <string>


class HashedString {

public:
    static long defaultErrorValue;


    ~HashedString();
    HashedString();
    void getEmptyString();
    void operator==(HashedString const&)const;
    void operator!=(HashedString const&)const;
    void operator<(HashedString const&)const;
    HashedString(HashedString const&);
    HashedString(HashedString &&);
//  HashedString(decltype(nullptr); //TODO: incomplete function definition
    void computeHash(char const*);
    void computeHash(std::string const&);
    HashedString(char const*);
    HashedString(std::string const&);
    HashedString(unsigned long, char const*);
    HashedString(unsigned long, std::string);
    bool isEmpty()const;
    void empty()const;
    void clear();
    void getHash()const;
    std::string getString()const;
    void c_str()const;
};
