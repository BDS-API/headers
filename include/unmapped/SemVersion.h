#pragma once

#include <string>
#include "./SemVersion.h"
#include "../json/Value.h"


class SemVersion {

public:
    static long AnyVersionConstructor;


    ~SemVersion();
    SemVersion(SemVersion const&);
    SemVersion();
    void _parseVersionToString();
    SemVersion(unsigned short, unsigned short, unsigned short, std::string const&, std::string const&);
//  SemVersion(SemVersion::any_version_constructor); //TODO: incomplete function definition
//  void fromString(std::string const&, SemVersion &, SemVersion::ParseOption); //TODO: incomplete function definition
    void fromJsonArray(Json::Value const&, SemVersion &);
//  void fromJson(Json::Value const&, SemVersion &, SemVersion::ParseOption); //TODO: incomplete function definition
    void operator<(SemVersion const&)const;
    void operator>(SemVersion const&)const;
    void operator==(SemVersion const&)const;
    void operator<=(SemVersion const&)const;
    void operator>=(SemVersion const&)const;
    bool isValid()const;
    bool isAnyVersion()const;
    void operator!=(SemVersion const&)const;
    std::string asString()const;
    void getMajor()const;
    void getMinor()const;
    void getPatch()const;
    std::string getPreRelease()const;
    std::string getBuildMeta()const;
    void satisfies(SemVersion const&, SemVersion const&);
    void satisfies(SemVersion const&)const;
};
