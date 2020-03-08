#pragma once



class HashedString {

public:
    static long defaultErrorValue;


    HashedString(void);
    void getEmptyString(void);
    HashedString(HashedString const&);
    HashedString(HashedString&&);
    HashedString(decltype(nullptr));
    void computeHash(char const*);
    void computeHash(std::string const&);
    HashedString(char const*);
    HashedString(std::string const&);
    HashedString(unsigned long, char const*);
    HashedString(unsigned long, std::string);
    bool isEmpty(void)const;
    void empty(void)const;
    void clear(void);
    void getHash(void)const;
    void c_str(void)const;
};
