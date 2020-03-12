#pragma once

#include "IWorldRegistriesProvider.h"
#include "FilterGroup.h"


class BiomeFilterGroup : FilterGroup {

public:
//  virtual void _createSubgroup(FilterGroup::CollectionType)const; //TODO: incomplete function definition
    ~BiomeFilterGroup();
    BiomeFilterGroup(BiomeFilterGroup const&);
//  BiomeFilterGroup(FilterGroup::CollectionType); //TODO: incomplete function definition
    void finalizeParsedValue(IWorldRegistriesProvider &);
};
