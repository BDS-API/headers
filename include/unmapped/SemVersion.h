#pragma once

#include <string>


class SemVersion {

public:
    static long AnyVersionConstructor;

    ~SemVersion(); // _ZN10SemVersionD2Ev
    SemVersion(SemVersion const&); // _ZN10SemVersionC2ERKS_
    SemVersion(); // _ZN10SemVersionC2Ev
    void _parseVersionToString(); // _ZN10SemVersion21_parseVersionToStringEv
    SemVersion(unsigned short, unsigned short, unsigned short, std::string const&, std::string const&); // _ZN10SemVersionC2EtttRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
//  SemVersion(SemVersion::any_version_constructor); //TODO: incomplete function definition // _ZN10SemVersionC2ENS_23any_version_constructorE
//  void fromString(std::string const&, SemVersion &, SemVersion::ParseOption); //TODO: incomplete function definition // _ZN10SemVersion10fromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERS_NS_11ParseOptionE
    void fromJsonArray(Json::Value const&, SemVersion &); // _ZN10SemVersion13fromJsonArrayERKN4Json5ValueERS_
//  void fromJson(Json::Value const&, SemVersion &, SemVersion::ParseOption); //TODO: incomplete function definition // _ZN10SemVersion8fromJsonERKN4Json5ValueERS_NS_11ParseOptionE
    void operator<(SemVersion const&)const; // _ZNK10SemVersionltERKS_
    void operator>(SemVersion const&)const; // _ZNK10SemVersiongtERKS_
    void operator==(SemVersion const&)const; // _ZNK10SemVersioneqERKS_
    void operator<=(SemVersion const&)const; // _ZNK10SemVersionleERKS_
    void operator>=(SemVersion const&)const; // _ZNK10SemVersiongeERKS_
    bool isValid()const; // _ZNK10SemVersion7isValidEv
    bool isAnyVersion()const; // _ZNK10SemVersion12isAnyVersionEv
    void operator!=(SemVersion const&)const; // _ZNK10SemVersionneERKS_
    std::string asString()const; // _ZNK10SemVersion8asStringB5cxx11Ev
    void getMajor()const; // _ZNK10SemVersion8getMajorEv
    void getMinor()const; // _ZNK10SemVersion8getMinorEv
    void getPatch()const; // _ZNK10SemVersion8getPatchEv
    std::string getPreRelease()const; // _ZNK10SemVersion13getPreReleaseB5cxx11Ev
    std::string getBuildMeta()const; // _ZNK10SemVersion12getBuildMetaB5cxx11Ev
    void satisfies(SemVersion const&, SemVersion const&); // _ZN10SemVersion9satisfiesERKS_S1_
    void satisfies(SemVersion const&)const; // _ZNK10SemVersion9satisfiesERKS_
};
