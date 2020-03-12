#pragma once

#include <string>
#include "../json/Value.h"


class SemVersion {

public:
    static long AnyVersionConstructor;

    void operator<=(SemVersion const&)const;
    std::string asString()const;
    std::string getPreRelease()const;
    void operator!=(SemVersion const&)const;
    void getPatch()const;
    SemVersion(SemVersion const&);
//  SemVersion(SemVersion::any_version_constructor); //TODO: incomplete function definition
//  void fromString(std::string const&, SemVersion &, SemVersion::ParseOption); //TODO: incomplete function definition
    void getMajor()const;
    void operator==(SemVersion const&)const;
//  void fromJson(Json::Value const&, SemVersion &, SemVersion::ParseOption); //TODO: incomplete function definition
    void satisfies(SemVersion const&, SemVersion const&);
    void _parseVersionToString();
    void getMinor()const;
    std::string getBuildMeta()const;
    ~SemVersion();
    SemVersion(unsigned short, unsigned short, unsigned short, std::string const&, std::string const&);
    void operator>=(SemVersion const&)const;
    SemVersion();
    void fromJsonArray(Json::Value const&, SemVersion &);
    void operator>(SemVersion const&)const;
    bool isAnyVersion()const;
    void satisfies(SemVersion const&)const;
    bool isValid()const;
    void operator<(SemVersion const&)const;
};
