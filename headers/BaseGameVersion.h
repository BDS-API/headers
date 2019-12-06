#pragma once

class BaseGameVersion {

public:
    static long BaseGameVersion::AnyVersionConstructor;
    static long BaseGameVersion::EMPTY;
    static long BaseGameVersion::ANY;


    void BaseGameVersion(void);
    void BaseGameVersion(BaseGameVersion const&);
    void BaseGameVersion(unsigned short, unsigned int);
    void BaseGameVersion(BaseGameVersion::any_version_constructor);
    void BaseGameVersion(SemVersion const&);
    bool isValid(void)const;
    void asSemVersion(void)const;
    bool isAnyVersion(void)const;
    void getMajor(void)const;
    void getMinor(void)const;
    void fromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BaseGameVersion&);
};
