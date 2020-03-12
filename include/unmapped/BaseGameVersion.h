#pragma once

#include <string>


class BaseGameVersion {

public:
    static long AnyVersionConstructor;
    static long EMPTY;
    static long ANY;

    void operator<(BaseGameVersion const&)const;
//  BaseGameVersion(BaseGameVersion::any_version_constructor); //TODO: incomplete function definition
    bool isValid()const;
    bool isAnyVersion()const;
    BaseGameVersion();
    BaseGameVersion(BaseGameVersion const&);
    void operator==(BaseGameVersion const&)const;
    BaseGameVersion(SemVersion const&);
    bool isCompatibleWith(BaseGameVersion const&)const;
    std::string asString()const;
    void fromString(std::string const&, BaseGameVersion &);
    ~BaseGameVersion();
    void operator<=(BaseGameVersion const&)const;
    bool asSemVersion()const;
    void getMinor()const;
    void operator>=(BaseGameVersion const&)const;
    void operator>(BaseGameVersion const&)const;
    BaseGameVersion(unsigned short, unsigned int);
    void getMajor()const;
};
