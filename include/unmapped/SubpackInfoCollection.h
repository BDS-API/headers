#pragma once

#include <string>


class SubpackInfoCollection {

public:
    SubpackInfoCollection(); // _ZN21SubpackInfoCollectionC2Ev
    ~SubpackInfoCollection(); // _ZN21SubpackInfoCollectionD2Ev
    bool hasSubpacks()const; // _ZNK21SubpackInfoCollection11hasSubpacksEv
    void addSubpackInfo(SubpackInfo &&); // _ZN21SubpackInfoCollection14addSubpackInfoEO11SubpackInfo
    void getSubpackInfo()const; // _ZNK21SubpackInfoCollection14getSubpackInfoEv
    void getSubpackCount()const; // _ZNK21SubpackInfoCollection15getSubpackCountEv
    std::string getDefaultSubpackName(ContentTierInfo const&)const; // _ZNK21SubpackInfoCollection21getDefaultSubpackNameB5cxx11ERK15ContentTierInfo
    void getDefaultSubpackIndex(ContentTierInfo const&)const; // _ZNK21SubpackInfoCollection22getDefaultSubpackIndexERK15ContentTierInfo
    void _isValidSubpackIndex(int)const; // _ZNK21SubpackInfoCollection20_isValidSubpackIndexEi
    bool isCompatibleSubpack(int, ContentTierInfo const&)const; // _ZNK21SubpackInfoCollection19isCompatibleSubpackEiRK15ContentTierInfo
    bool isCompatibleSubpack(std::string const&, ContentTierInfo const&)const; // _ZNK21SubpackInfoCollection19isCompatibleSubpackERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK15ContentTierInfo
    void getSubpackIndex(std::string const&)const; // _ZNK21SubpackInfoCollection15getSubpackIndexERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isCompatible(ContentTierInfo const&)const; // _ZNK21SubpackInfoCollection12isCompatibleERK15ContentTierInfo
    std::string getSubpackName(int)const; // _ZNK21SubpackInfoCollection14getSubpackNameB5cxx11Ei
    std::string getSubpackFolderName(int)const; // _ZNK21SubpackInfoCollection20getSubpackFolderNameB5cxx11Ei
    void getSubpackContentTier(int)const; // _ZNK21SubpackInfoCollection21getSubpackContentTierEi
};
