#pragma once

#include <string>


class SubpackInfoCollection {

public:
    void addSubpackInfo(SubpackInfo &&);
    void _isValidSubpackIndex(int)const;
    bool isCompatibleSubpack(int, ContentTierInfo const&)const;
    std::string getSubpackName(int)const;
    bool hasSubpacks()const;
    std::string getDefaultSubpackName(ContentTierInfo const&)const;
    void getSubpackInfo()const;
    void getSubpackContentTier(int)const;
    bool isCompatibleSubpack(std::string const&, ContentTierInfo const&)const;
    SubpackInfoCollection();
    std::string getSubpackFolderName(int)const;
    void getSubpackCount()const;
    bool isCompatible(ContentTierInfo const&)const;
    void getSubpackIndex(std::string const&)const;
    ~SubpackInfoCollection();
    void getDefaultSubpackIndex(ContentTierInfo const&)const;
};
