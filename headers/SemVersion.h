#pragma once

class SemVersion {

public:
    static long SemVersion::AnyVersionConstructor;


    void SemVersion(SemVersion const&);
    void SemVersion(void);
    void _parseVersionToString(void);
    void SemVersion(unsigned short, unsigned short, unsigned short, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void SemVersion(SemVersion::any_version_constructor);
    void fromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, SemVersion&, SemVersion::ParseOption);
    void fromJsonArray(Json::Value const&, SemVersion&);
    void fromJson(Json::Value const&, SemVersion&, SemVersion::ParseOption);
    bool isValid(void)const;
    bool isAnyVersion(void)const;
    void getMajor(void)const;
    void getMinor(void)const;
    void getPatch(void)const;
    void satisfies(SemVersion const&, SemVersion const&);
    void satisfies(SemVersion const&)const;
};
