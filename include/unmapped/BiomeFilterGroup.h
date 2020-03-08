#pragma once



class BiomeFilterGroup : FilterGroup {

public:
    BiomeFilterGroup::~BiomeFilterGroup()
    virtual void _createSubgroup(FilterGroup::CollectionType)const;

    BiomeFilterGroup(BiomeFilterGroup const&);
    BiomeFilterGroup(FilterGroup::CollectionType);
    void finalizeParsedValue(IWorldRegistriesProvider &);
};
