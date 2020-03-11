#pragma once

#include <string>
#include "./SemVersion.h"
#include "./BaseGameVersion.h"


class BaseGameVersion {

public:
    static long AnyVersionConstructor;
    static long EMPTY;
    static long ANY;


    ~BaseGameVersion();
    BaseGameVersion();
    BaseGameVersion(BaseGameVersion const&);
    BaseGameVersion(unsigned short, unsigned int);
//  BaseGameVersion(BaseGameVersion::any_version_constructor); //TODO: incomplete function definition
    BaseGameVersion(SemVersion const&);
    void operator==(BaseGameVersion const&)const;
    void operator<(BaseGameVersion const&)const;
    void operator<=(BaseGameVersion const&)const;
    void operator>(BaseGameVersion const&)const;
    void operator>=(BaseGameVersion const&)const;
    std::string asString()const;
    bool isValid()const;
    bool asSemVersion()const;
    bool isAnyVersion()const;
    void getMajor()const;
    void getMinor()const;
    bool isCompatibleWith(BaseGameVersion const&)const;
    void fromString(std::string const&, BaseGameVersion &);
};
