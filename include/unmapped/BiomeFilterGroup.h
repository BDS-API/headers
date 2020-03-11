#pragma once

#include "./BiomeFilterGroup.h"
#include "./FilterGroup.h"
#include "./IWorldRegistriesProvider.h"


class BiomeFilterGroup : FilterGroup {

public:
    virtual ~BiomeFilterGroup();
//  virtual void _createSubgroup(FilterGroup::CollectionType)const; //TODO: incomplete function definition

    BiomeFilterGroup(BiomeFilterGroup const&);
//  BiomeFilterGroup(FilterGroup::CollectionType); //TODO: incomplete function definition
    void finalizeParsedValue(IWorldRegistriesProvider &);
};
