#pragma once

class BaseGameVersion {

public:
    static long AnyVersionConstructor;
    static long EMPTY;
    static long ANY;


    BaseGameVersion(void);
    BaseGameVersion(BaseGameVersion const&);
    BaseGameVersion(unsigned short, unsigned int);
    BaseGameVersion(BaseGameVersion::any_version_constructor);
    BaseGameVersion(SemVersion const&);
    bool isValid(void)const;
    void asSemVersion(void)const;
    bool isAnyVersion(void)const;
    void getMajor(void)const;
    void getMinor(void)const;
    bool isCompatibleWith(BaseGameVersion const&)const;
    void fromString(std::string const&, BaseGameVersion&);
};
