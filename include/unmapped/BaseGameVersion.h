#pragma once

#include <string>


class BaseGameVersion {

public:
    static long AnyVersionConstructor;
    static long EMPTY;
    static long ANY;

    ~BaseGameVersion(); // _ZN15BaseGameVersionD2Ev
    BaseGameVersion(); // _ZN15BaseGameVersionC2Ev
    BaseGameVersion(BaseGameVersion const&); // _ZN15BaseGameVersionC2ERKS_
    BaseGameVersion(unsigned short, unsigned int); // _ZN15BaseGameVersionC2Etj
//  BaseGameVersion(BaseGameVersion::any_version_constructor); //TODO: incomplete function definition // _ZN15BaseGameVersionC2ENS_23any_version_constructorE
    BaseGameVersion(SemVersion const&); // _ZN15BaseGameVersionC2ERK10SemVersion
    void operator==(BaseGameVersion const&)const; // _ZNK15BaseGameVersioneqERKS_
    void operator<(BaseGameVersion const&)const; // _ZNK15BaseGameVersionltERKS_
    void operator<=(BaseGameVersion const&)const; // _ZNK15BaseGameVersionleERKS_
    void operator>(BaseGameVersion const&)const; // _ZNK15BaseGameVersiongtERKS_
    void operator>=(BaseGameVersion const&)const; // _ZNK15BaseGameVersiongeERKS_
    std::string asString()const; // _ZNK15BaseGameVersion8asStringB5cxx11Ev
    bool isValid()const; // _ZNK15BaseGameVersion7isValidEv
    bool asSemVersion()const; // _ZNK15BaseGameVersion12asSemVersionEv
    bool isAnyVersion()const; // _ZNK15BaseGameVersion12isAnyVersionEv
    void getMajor()const; // _ZNK15BaseGameVersion8getMajorEv
    void getMinor()const; // _ZNK15BaseGameVersion8getMinorEv
    bool isCompatibleWith(BaseGameVersion const&)const; // _ZNK15BaseGameVersion16isCompatibleWithERKS_
    void fromString(std::string const&, BaseGameVersion &); // _ZN15BaseGameVersion10fromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERS_
};
