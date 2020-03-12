#pragma once

#include "FilterGroup.h"


class BiomeFilterGroup : FilterGroup {

public:
    ~BiomeFilterGroup();
//  virtual void _createSubgroup(FilterGroup::CollectionType)const; //TODO: incomplete function definition
    void finalizeParsedValue(IWorldRegistriesProvider &);
//  BiomeFilterGroup(FilterGroup::CollectionType); //TODO: incomplete function definition
    BiomeFilterGroup(BiomeFilterGroup const&);
};
