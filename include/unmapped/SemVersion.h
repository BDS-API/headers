#pragma once

#include <string>


class SemVersion {

public:
    static long AnyVersionConstructor;

    void operator!=(SemVersion const&)const;
    void getPatch()const;
    std::string asString()const;
    void operator>=(SemVersion const&)const;
    void fromJsonArray(Json::Value const&, SemVersion &);
    std::string getBuildMeta()const;
    std::string getPreRelease()const;
    void satisfies(SemVersion const&)const;
    SemVersion(SemVersion const&);
//  void fromJson(Json::Value const&, SemVersion &, SemVersion::ParseOption); //TODO: incomplete function definition
    void getMinor()const;
    bool isAnyVersion()const;
    void operator>(SemVersion const&)const;
    void satisfies(SemVersion const&, SemVersion const&);
    bool isValid()const;
//  void fromString(std::string const&, SemVersion &, SemVersion::ParseOption); //TODO: incomplete function definition
    SemVersion(unsigned short, unsigned short, unsigned short, std::string const&, std::string const&);
    void _parseVersionToString();
    void operator==(SemVersion const&)const;
    ~SemVersion();
    void operator<(SemVersion const&)const;
    SemVersion();
//  SemVersion(SemVersion::any_version_constructor); //TODO: incomplete function definition
    void operator<=(SemVersion const&)const;
    void getMajor()const;
};
