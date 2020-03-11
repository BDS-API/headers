#pragma once

#include "./ContentTierInfo.h"
#include "./SubpackInfo.h"
#include <string>


class SubpackInfoCollection {

public:

    SubpackInfoCollection();
    ~SubpackInfoCollection();
    bool hasSubpacks()const;
    void addSubpackInfo(SubpackInfo &&);
    void getSubpackInfo()const;
    void getSubpackCount()const;
    std::string getDefaultSubpackName(ContentTierInfo const&)const;
    void getDefaultSubpackIndex(ContentTierInfo const&)const;
    void _isValidSubpackIndex(int)const;
    bool isCompatibleSubpack(int, ContentTierInfo const&)const;
    bool isCompatibleSubpack(std::string const&, ContentTierInfo const&)const;
    void getSubpackIndex(std::string const&)const;
    bool isCompatible(ContentTierInfo const&)const;
    std::string getSubpackName(int)const;
    std::string getSubpackFolderName(int)const;
    void getSubpackContentTier(int)const;
};
