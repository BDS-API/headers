#pragma once

#include <string>


class HashedString {

public:
    static long defaultErrorValue;

    HashedString(unsigned long, char const*);
    HashedString(unsigned long, std::string);
//  HashedString(decltype(nullptr); //TODO: incomplete function definition
    ~HashedString();
    void clear();
    HashedString(char const*);
    HashedString(HashedString &&);
    HashedString();
    void computeHash(std::string const&);
    void operator==(HashedString const&)const;
    void getHash()const;
    HashedString(std::string const&);
    std::string getString()const;
    HashedString(HashedString const&);
    void empty()const;
    void operator<(HashedString const&)const;
    bool isEmpty()const;
    void getEmptyString();
    void operator!=(HashedString const&)const;
    void c_str()const;
    void computeHash(char const*);
};
