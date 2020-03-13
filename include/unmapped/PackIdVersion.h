#pragma once

#include <string>


class PackIdVersion {

public:
    ~PackIdVersion(); // _ZN13PackIdVersionD2Ev
    PackIdVersion(PackIdVersion const&); // _ZN13PackIdVersionC2ERKS_
    PackIdVersion(PackIdVersion &&); // _ZN13PackIdVersionC2EOS_
    PackIdVersion(); // _ZN13PackIdVersionC2Ev
//  PackIdVersion(std::string const&, std::string const&, PackType); //TODO: incomplete function definition // _ZN13PackIdVersionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_8PackType
//  PackIdVersion(mce::UUID const&, SemVersion const&, PackType); //TODO: incomplete function definition // _ZN13PackIdVersionC2ERKN3mce4UUIDERK10SemVersion8PackType
    void operator==(PackIdVersion const&)const; // _ZNK13PackIdVersioneqERKS_
    void operator!=(PackIdVersion const&)const; // _ZNK13PackIdVersionneERKS_
    void operator<(PackIdVersion const&)const; // _ZNK13PackIdVersionltERKS_
    void operator>(PackIdVersion const&)const; // _ZNK13PackIdVersiongtERKS_
    void satisfies(PackIdVersion const&)const; // _ZNK13PackIdVersion9satisfiesERKS_
    std::string asString()const; // _ZNK13PackIdVersion8asStringB5cxx11Ev
};
