#pragma once

class BiomeFilterGroup : FilterGroup {

public:
    virtual ~BiomeFilterGroup();
    virtual void _createSubgroup(FilterGroup::CollectionType)const;

    void BiomeFilterGroup(BiomeFilterGroup const&);
    void BiomeFilterGroup(FilterGroup::CollectionType);
    void finalizeParsedValue(IWorldRegistriesProvider &);
};
