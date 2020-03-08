#pragma once



class HashedString {

public:
    static long defaultErrorValue;


    HashedString(void);
    void getEmptyString();
    HashedString(HashedString const&);
    HashedString(HashedString&&);
    HashedString(decltype(nullptr));
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
    void c_str()const;
};
