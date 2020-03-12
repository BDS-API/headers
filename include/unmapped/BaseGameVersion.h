#pragma once

#include "SemVersion.h"
#include <string>


class BaseGameVersion {

public:
    static long AnyVersionConstructor;
    static long EMPTY;
    static long ANY;

    BaseGameVersion(SemVersion const&);
    void getMajor()const;
    std::string asString()const;
    void getMinor()const;
    void operator>=(BaseGameVersion const&)const;
//  BaseGameVersion(BaseGameVersion::any_version_constructor); //TODO: incomplete function definition
    void operator>(BaseGameVersion const&)const;
    BaseGameVersion(BaseGameVersion const&);
    void operator<=(BaseGameVersion const&)const;
    bool asSemVersion()const;
    ~BaseGameVersion();
    BaseGameVersion();
    void operator==(BaseGameVersion const&)const;
    void operator<(BaseGameVersion const&)const;
    BaseGameVersion(unsigned short, unsigned int);
    bool isAnyVersion()const;
    bool isValid()const;
    bool isCompatibleWith(BaseGameVersion const&)const;
    void fromString(std::string const&, BaseGameVersion &);
};
