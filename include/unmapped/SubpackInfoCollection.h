#pragma once



class SubpackInfoCollection {

public:

    SubpackInfoCollection(void);
    bool hasSubpacks()const;
    void addSubpackInfo(SubpackInfo &&);
    void getSubpackInfo()const;
    void getSubpackCount()const;
    void getDefaultSubpackIndex(ContentTierInfo const&)const;
    void _isValidSubpackIndex(int)const;
    bool isCompatibleSubpack(int, ContentTierInfo const&)const;
    bool isCompatibleSubpack(std::string const&, ContentTierInfo const&)const;
    void getSubpackIndex(std::string const&)const;
    bool isCompatible(ContentTierInfo const&)const;
    void getSubpackContentTier(int)const;
};
