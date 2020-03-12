#pragma once

#include "ContentTierInfo.h"
#include <string>
#include "SubpackInfo.h"


class SubpackInfoCollection {

public:
    void _isValidSubpackIndex(int)const;
    void getSubpackCount()const;
    void addSubpackInfo(SubpackInfo &&);
    void getDefaultSubpackIndex(ContentTierInfo const&)const;
    void getSubpackContentTier(int)const;
    bool hasSubpacks()const;
    void getSubpackIndex(std::string const&)const;
    std::string getSubpackName(int)const;
    SubpackInfoCollection();
    void getSubpackInfo()const;
    bool isCompatibleSubpack(int, ContentTierInfo const&)const;
    std::string getSubpackFolderName(int)const;
    bool isCompatible(ContentTierInfo const&)const;
    bool isCompatibleSubpack(std::string const&, ContentTierInfo const&)const;
    ~SubpackInfoCollection();
    std::string getDefaultSubpackName(ContentTierInfo const&)const;
};
