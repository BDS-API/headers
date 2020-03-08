#pragma once

#include "../json/Value"


class SemVersion {

public:
    static long AnyVersionConstructor;


    SemVersion(SemVersion const&);
    SemVersion(void);
    void _parseVersionToString();
    SemVersion(unsigned short, unsigned short, unsigned short, std::string const&, std::string const&);
    SemVersion(SemVersion::any_version_constructor);
    void fromString(std::string const&, SemVersion&, SemVersion::ParseOption);
    void fromJsonArray(Json::Value const&, SemVersion&);
    void fromJson(Json::Value const&, SemVersion&, SemVersion::ParseOption);
    bool isValid()const;
    bool isAnyVersion()const;
    void getMajor()const;
    void getMinor()const;
    void getPatch()const;
    void satisfies(SemVersion const&, SemVersion const&);
    void satisfies(SemVersion const&)const;
};
