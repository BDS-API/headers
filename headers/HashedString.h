#pragma once

class HashedString {

public:
    static long HashedString::defaultErrorValue;


    void HashedString(void);
    void getEmptyString(void);
    void HashedString(HashedString const&);
    void HashedString(HashedString&&);
    void HashedString(decltype(nullptr));
    void computeHash(char const*);
    void computeHash(std::string const&);
    void HashedString(char const*);
    void HashedString(std::string const&);
    void HashedString(unsigned long, char const*);
    void HashedString(unsigned long, std::string);
    bool isEmpty(void)const;
    void empty(void)const;
    void clear(void);
    void getHash(void)const;
    void c_str(void)const;
};
