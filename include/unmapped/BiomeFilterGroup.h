#pragma once



class BiomeFilterGroup : FilterGroup {

public:
    virtual BiomeFilterGroup::~BiomeFilterGroup()
    virtual void _createSubgroup(FilterGroup::CollectionType)const;

    BiomeFilterGroup(BiomeFilterGroup const&);
    BiomeFilterGroup(FilterGroup::CollectionType);
    void finalizeParsedValue(IWorldRegistriesProvider &);
};
